/**
 * ---------------------------------------------------------------------------
 *   Copyright (C) 2008 0x6e6562
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 * ---------------------------------------------------------------------------
 **/
package org.amqp.methods;


    import openfl.errors.Error;
    import openfl.utils.IDataInput;
    import openfl.utils.IDataOutput;
    import openfl.utils.ByteArray;

    import org.amqp.LongString;
    import org.amqp.impl.ByteArrayLongString;
    import org.amqp.error.MalformedFrameError;

    class MethodArgumentReader {

        inline static var INT_MASK:Int = 0xffff;
        var input:IDataInput;

        /** If we are reading one or more bits, holds the current packed collection of bits */
        var bits:Int;
        /** If we are reading one or more bits, keeps track of which bit position we are reading from */
        var bit:Int;

        public function new(input:IDataInput) {
            this.input = input;
            clearBits();
        }

        /**
         * Private API - resets the bit group accumulator variables when
         * some non-bit argument value is to be read.
         */
        function clearBits():Void {
            bits = 0;
            bit = 0x100;
        }

        static function unsignedExtend(value:Int):Int {
            return value & INT_MASK;
        }

        public static function _readLongstr(input:IDataInput):LongString {
            var contentLength = unsignedExtend(input.readInt());
            if(contentLength < 0xfffffff) { // Int max is platform specific Flash9 28 bits 3 used for typing. 1 missing? Neko 31 bits
                //final byte [] buffer = new byte[(int)contentLength];
                //in.readFully(buffer);

                var buf:ByteArray = new ByteArray();
                input.readBytes(buf, 0, contentLength);
                return new ByteArrayLongString(buf);
            }
            else {
                throw new Error("Very long strings not currently supported");
            }

            return new ByteArrayLongString();
        }

        public static function _readShortstr(input:IDataInput):String {
            var length:Int = input.readUnsignedByte();
            return input.readUTFBytes(length);
        }
      
        public function readLongstr():LongString {
            clearBits();
            return _readLongstr(input);
        }

        public function readShortstr():String {
            clearBits();
            return _readShortstr(input);
        }

        /** Public API - reads a short integer argument. */
        public function readShort():Int {
            clearBits();
            return input.readShort();
        }

        /** Public API - reads an integer argument. */
        public function readLong():Int{
            clearBits();
            return input.readInt();
        }

        /** Public API - reads a long integer argument. */
        public function readLonglong():Float {
            clearBits();
//            var higher:Int = input.readInt();
//            var lower:Int = input.readInt();
//            return lower + higher << 0x100000000;
            return input.readDouble();
        }

        /** Public API - reads a bit/boolean argument. */
        public function readBit():Bool {
            if (bit > 0x80) {
                bits = input.readUnsignedByte();
                bit = 0x01;
            }

            var result:Bool = (bits&bit) != 0;
            bit = bit << 1;
            return result;
        }

        /** Public API - reads a table argument. */
        public function readTable():Map<String,Dynamic> {
            clearBits();
            return _readTable(this.input);
        }

        /**
         * Public API - reads a table argument from a given stream. Also
         * called by {@link ContentHeaderPropertyReader}.
         */
        public static function _readTable(input:IDataInput):Map<String,Dynamic> {
            var table:Map<String,Dynamic> = new Map<String,Dynamic>();
            var tableLength:Int = input.readInt();
            var tableIn:ByteArray = new ByteArray();
            input.readBytes(tableIn, 0, tableLength);
            var value:Dynamic = null;

            while(tableIn.bytesAvailable >0) {
                var name:String = _readShortstr(tableIn);
                var type:Int = tableIn.readUnsignedByte();
            
                switch(type) {
                    case 83 : //'S'
                        value = _readLongstr(tableIn);
                        break;
                    case 73: //'I'
                        value = tableIn.readInt();
                        break;
                    /*
                    case 68: //'D':
                        var scale:int = tableIn.readUnsignedByte();
                        byte [] unscaled = new byte[4];
                        tableIn.readFully(unscaled);
                        value = new BigDecimal(new BigInteger(unscaled), scale);
                        break;
                        */
                    case 84: //'T':
                        value = _readTimestamp(tableIn);
                        break;
                    case 70: //'F':
                        value = _readTable(tableIn);
                        break;
                    default:
                        throw new MalformedFrameError("Unrecognised type in table");
                }

                if(!table.exists(name))
                    table.set(name, value);
            }
            return table;
        }

        /** Public API - reads an octet argument. */
        public function readOctet():Int{
            clearBits();
            return input.readUnsignedByte();
        }

        /** Public API - convenience method - reads a timestamp argument from the DataInputStream. */
        public static function _readTimestamp(input:IDataInput):Date {
            var date:Date = Date.fromTime(input.readInt() * 1000);
            return date;
            //return new Date(in.readLong() * 1000);
        }

        /** Public API - reads an timestamp argument. */
        public function readTimestamp():Date {
            clearBits();
            return _readTimestamp(input);
        }

    }
