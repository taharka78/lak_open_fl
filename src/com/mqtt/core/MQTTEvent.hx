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
	import openfl.events.Event;
	
	/**
	 * MQTTEvent.as class.   	
	 * @see http://blogs.adobe.com/steampowered/2011/05/dispatching-events-from-an-actionscript-class.html
	 * @author yangboz
	 * @langVersion 3.0
	 * @playerVersion 11.2+
	 * @airVersion 3.2+
	 * Created Nov 22, 2012 5:43:00 PM
	 */   	 
	class MQTTEvent extends Event
	{		
		//--------------------------------------------------------------------------
		//
		//  Variables
		//
		//--------------------------------------------------------------------------
		public var message:String;
		//----------------------------------
		//  CONSTANTS
		//----------------------------------
		//@see https://github.com/yangboz/as3MQTT/wiki/Command-message
		public static inline var CONNECT:String = "mqttConnect";
		public static inline var CLOSE:String = "mqttClose";
		public static inline var MESSGE:String = "mqttMessage";//A wrapper for mqtt socket data.
		public static inline var ERROR:String = "mqttError";//A wrapper for mqtt socket error(IOError,SercurityError)
		public static inline var PUBLISH:String = "mqttPublish";
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
		public function new(type:String, bubbles:Bool=false, cancelable:Bool=false,message:String=null)
		{
			super(type, bubbles, cancelable);
			//
			this.message = message;
		}     	
		//--------------------------------------------------------------------------
		//
		//  Public methods
		//
		//--------------------------------------------------------------------------
		override public function clone():Event
		{
			return new MQTTEvent(type,bubbles,cancelable,message);
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