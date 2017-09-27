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
package org.amqp.headers;

    import openfl.utils.IDataInput;
    import org.amqp.LongString;
    import org.amqp.methods.MethodArgumentReader;

    class ContentHeaderPropertyReader
     {
        var input:IDataInput;
        /** Collected field flags */
        public var flags:Array<Dynamic>;
        /** Position in argument stream */
        var argumentIndex:Int;

        public function new(input:IDataInput){
            this.input = input;
            readFlags();
            this.argumentIndex = 0;
        }

        /**
        * Private API - reads the initial absence/presence flags from the
        * input stream
        */
        public function readFlags():Void {
            var acc:Array<Dynamic> = new Array();
            do {
                var flagsWord = input.readShort();
                acc.push(flagsWord);
                if ((flagsWord & 1) == 0) {
                    break;
                }
            } while (true);
            flags = acc;
            /*
            flags = new int[acc.size()];
            for (int i = 0; i < flags.length; i++) {
                flags[i] = ((Integer) acc.get(i)).intValue();
            }
            */
        }

        /**
         * Private API - checks the flags to see if the argument at the
         * current position is to be expected to be present in the main
         * data stream.
         */
        function argPresent():Bool {
            var word:Int = Math.floor(argumentIndex / 15);
            var bit:Int = 15 - (argumentIndex % 15);
            argumentIndex++;
            return (flags[word] & (1 << bit)) != 0;
        }

        /** Reads and returns an AMQP short string content header field, or null if absent. */
        public function readShortstr():String{
            if (!argPresent()) return null;
            return MethodArgumentReader._readShortstr(input);
        }

        /** Reads and returns an AMQP "long string" (binary) content header field, or null if absent. */
        public function readLongstr():LongString {
            if (!argPresent()) return null;
            return MethodArgumentReader._readLongstr(input);
        }

        /** Reads and returns an AMQP short integer content header field, or null if absent. */
        public function readShort():Int{
            if (!argPresent()) return 0;
            return input.readUnsignedShort();
        }

        /** Reads and returns an AMQP integer content header field, or null if absent. */
        public function readLong():Int{
            if (!argPresent()) return 0;
            return input.readInt();
        }

        /** Reads and returns an AMQP long integer content header field, or null if absent. */
        public function readLonglong():Float {
            if (!argPresent()) return 0;
            return input.readDouble();
        }

        /** Reads and returns an AMQP bit content header field. */
        public function readBit():Bool{
            return argPresent();
        }

        /** Reads and returns an AMQP table content header field, or null if absent. */
        public function readTable():Map<String,Dynamic>{
            if (!argPresent()) return null;
            return MethodArgumentReader._readTable(input);
        }

        /** Reads and returns an AMQP octet content header field, or null if absent. */
        public function readOctet():Int{
            if (!argPresent()) return 0;
            return input.readUnsignedByte();
        }

        /** Reads and returns an AMQP timestamp content header field, or null if absent. */
        public function readTimestamp():Date {
            if (!argPresent()) return null;
            return MethodArgumentReader._readTimestamp(input);
        }
    }
