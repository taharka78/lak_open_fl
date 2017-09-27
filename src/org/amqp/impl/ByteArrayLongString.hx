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
package org.amqp.impl;

    import openfl.utils.IDataInput;
    import openfl.utils.ByteArray;
    import org.amqp.LongString;

    class ByteArrayLongString implements LongString {

        var buf:ByteArray;

        public function new(?b:ByteArray=null) {
            buf = b==null? new ByteArray() : b;
        }

        public function length():Int
        {
            return buf.length;
        }

        public function getBytes():ByteArray {
            return buf;
        }

        public function getStream():IDataInput {
            return buf;
        }
    }
