/**
 *  GODPAPER Confidential,Copyright 2012. All rights reserved.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sub-license,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included
 *  in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THE SOFTWARE.
 */
package com.mqtt.core;
	//--------------------------------------------------------------------------
	//
	//  Imports
	//
	//--------------------------------------------------------------------------
	import openfl.utils.ByteArray;
	import openfl.utils.IDataInput;
	/**
	 * MQTT_Protocol.as class.
	 * @see http://public.dhe.ibm.com/software/dw/webservices/ws-mqtt/MQTT_V3.1_Protocol_Specific.pdf
	 * @author yangboz
	 * @langVersion 3.0
	 * @playerVersion 11.2+
	 * @airVersion 3.2+
	 * Created Nov 20, 2012 10:49:53 AM
	 */
	class MQTTProtocol
	{
		//--------------------------------------------------------------------------
		//
		//  Variables
		//
		//--------------------------------------------------------------------------

		//----------------------------------
		//  CONSTANTS
		//----------------------------------
		/* For version 3 of the MQTT protocol */
		/* Mosquitto MQTT Javascript/Websocket client */
		/* Provides complete support for QoS 0.
		* Will not cause an error on QoS 1/2 packets.
		*/
		public static inline var PROTOCOL_NAME:String="MQIsdp";
		public static inline var PROTOCOL_VERSION:Float=3;

		/* Message types */
		public static inline var CONNECT:UInt=0x10;
		public static inline var CONNACK:UInt=0x20;
		public static inline var PUBLISH:UInt=0x30;
		public static inline var PUBACK:UInt=0x40;
		public static inline var PUBREC:UInt=0x50;
		public static inline var PUBREL:UInt=0x60;
		public static inline var PUBCOMP:UInt=0x70;
		public static inline var SUBSCRIBE:UInt=0x80;
		public static inline var SUBACK:UInt=0x90;
		public static inline var UNSUBSCRIBE:UInt=0xA0;
		public static inline var UNSUBACK:UInt=0xB0;
		public static inline var PINGREQ:UInt=0xC0;
		public static inline var PINGRESP:UInt=0xD0;
		public static inline var DISCONNECT:UInt=0xE0;
		//
		public static inline var CONNACK_ACCEPTED:UInt=0;
		public static inline var CONNACK_REFUSED_PROTOCOL_VERSION:Int=1;
		public static inline var CONNACK_REFUSED_IDENTIFIER_REJECTED:Int=2;
		public static inline var CONNACK_REFUSED_SERVER_UNAVAILABLE:Int=3;
		public static inline var CONNACK_REFUSED_BAD_USERNAME_PASSWORD:Int=4;
		public static inline var CONNACK_REFUSED_NOT_AUTHORIZED:Int=5;

		public static inline var MQTT_MAX_PAYLOAD:Int=268435455;

		private var fixHead:ByteArray;
		private var varHead:ByteArray;
		private var payLoad:ByteArray;
		
		private var type:UInt;
		private var dup:UInt;
		private var qos:UInt;
		private var retain:UInt;
		private var remainingLength:UInt;
		private var remainPosition:UInt;
		
		///* stores the will of the client {willFlag,willQos,willRetainFlag} */
		public static var WILL:Map<String,UInt>;
		//--------------------------------------------------------------------------
		//
		//  Public properties
		//
		//-------------------------------------------------------------------------- 

		//--------------------------------------------------------------------------
		//
		//  Protected properties
		//
		//-------------------------------------------------------------------------- 

		//--------------------------------------------------------------------------
		//
		//  Constructor
		//
		//--------------------------------------------------------------------------
		public function new()
		{
			WILL = new Map<String,UInt>();
			//fake manual writing (big-endian)
			WILL['qos'] = 0x01;
			WILL['retain'] = 0x01;
		}
		//--------------------------------------------------------------------------
		//
		//  Public methods
		//
		//--------------------------------------------------------------------------
		//
		public function writeType(value:Int):Void
		{
			type = value;
			writeMessageType(type + (dup << 3) + (qos << 1) + retain);
		}
		
		public function writeDUP(value:Int):Void
		{
			dup = value;
			writeMessageType(type + (dup << 3) + (qos << 1) + retain);
		}
		
		public function writeQoS(value:Int):Void
		{
			qos = value;
			writeMessageType(type + (dup << 3) + (qos << 1) + retain);
		}
		
		public function writeRETAIN(value:Int):Void
		{
			retain = value;
			writeMessageType(type + (dup << 3) + (qos << 1) + retain);
		}
		
		public function writeRemainingLength(value:Int):Void
		{
			remainingLength = value;
			writeMessageType(type + (dup << 3) + (qos << 1) + retain);
		}
		
		public function readType():UInt
		{
			this.position=0;
			return this.readUnsignedByte() & 0xF0;
		}
		
		public function readDUP():UInt
		{
			this.position=0;
			return this.readUnsignedByte() >> 3 & 0x01;
		}
		
		public function readQoS():UInt
		{
			this.position=0;
			return this.readUnsignedByte() >> 1 & 0x03;
		}
		
		public function readRETAIN():UInt
		{
			this.position=0;
			return this.readUnsignedByte() & 0x01;
		}
		
		public function readRemainingLength():UInt
		{
			this.position = 1;
			return this.readUnsignedByte();
		}
		
		public function writeMessageType(value:Int):Void//Fix Head
		{
			this.position = 0;
			
			if( fixHead == null )
				fixHead = new ByteArray();
			
			this.position = 0;
			this.writeByte(value);
			var le:UInt = remainingLength;
			var digit:UInt = 0;
			do {
				digit = le % 128;
				le = le / 128;
				if(le > 0 ){
					digit = digit| 0x80;
				}
				this.writeByte(digit);

			}while(le > 0);
			this.remainPosition = this.position;

			//this.writeByte(remainingLength);
			this.readBytes(fixHead);
			
			type = value & 0xF0;
			dup = (value >> 3) & 0x01;
			qos = (value >> 1) & 0x03;
			retain = value & 0x01;
		}
		

		public function writeMessageValue(value:Any):Void//Variable Head
		{
			this.position = 2;
			this.writeBytes(value);
			this.serialize();
			writeMessageType( type + (dup << 3) + (qos << 1) + retain );
		}
		
		public function writeMessageFromBytes(input:IDataInput):Void
		{
			this.position = 0;
			this.writeType(input.readUnsignedByte());
			//get VarHead and Payload use RemainingLength

			//remainingLength = input.readUnsignedByte();
			
			//input.readBytes(this, 2, remainingLength);

			var multiplier :UInt = 1;
			var remainLength:UInt = 0;
			do 
			{
				var le:UInt = input.readUnsignedByte();
				remainLength += (le & 127) * multiplier;
				multiplier *= 128;
				
			}
			while ((le & 128) != 0);
			remainingLength = remainLength;
			writeMessageType( type + (dup << 3) + (qos << 1) + retain );
			input.readBytes(this, this.remainPosition, remainingLength);
			serialize();
		}
		
		public function readMessageType():ByteArray
		{
			return fixHead;
		}
		
		public function readMessageValue():ByteArray
		{
			return varHead;
		}
		
		public function readPayLoad():ByteArray
		{
			return payLoad;
		}
		/**
		 * @see http://help.adobe.com/en_US/FlashPlatform/reference/actionscript/3/flash/utils/IDataInput.html
		 */		
		public function serialize():Void
		{
			type 	= this.readType();
			dup 	= this.readDUP();
			qos 	= this.readQoS();
			retain	= this.readRETAIN();
			
			fixHead = new ByteArray();
			varHead = new ByteArray();
			payLoad = new ByteArray();
			
			this.position = 0;
			this.readBytes(fixHead, 0, this.remainPosition);
			
			this.position = this.remainPosition;
			switch( type ){
				case CONNECT://Remaining Length is the length of the variable header (12 bytes) and the length of the Payload
					this.readBytes(varHead, 0 , 12);
					this.readBytes(payLoad);
					
					remainingLength = varHead.length + payLoad.length;
					break;
				case PUBLISH://Remaining Length is the length of the variable header plus the length of the payload
					var index:Int = (this.readUnsignedByte() << 8) + this.readUnsignedByte();//the length of variable header
					this.position = this.remainPosition;
					this.readBytes(varHead, 0 , index + (qos?4:2));
					this.readBytes(payLoad);
					
					remainingLength = varHead.length + payLoad.length;
					break;
				case SUBSCRIBE://Remaining Length is the length of the payload
				case SUBACK://Remaining Length is the length of the payload
				case UNSUBSCRIBE://Remaining Length is the length of the payload
					this.readBytes(varHead, 0 , 2);
					this.readBytes(payLoad);
					
					remainingLength = varHead.length + payLoad.length;
					break;
				default://Remaining Length is the length of the variable header (2 bytes)
					this.readBytes(varHead);
					
					remainingLength = varHead.length;
					break;
			}
		}
		//--------------------------------------------------------------------------
		//
		//  Protected methods
		//
		//--------------------------------------------------------------------------

		//--------------------------------------------------------------------------
		//
		//  Private methods
		//
		//--------------------------------------------------------------------------
	}
