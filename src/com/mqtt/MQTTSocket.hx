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
package com.mqtt;

	//--------------------------------------------------------------------------
	//
	//  Imports
	//
	//--------------------------------------------------------------------------
	import com.mqtt.core.MQTTEvent;
	import com.mqtt.core.MQTTProtocol;
	import com.mqtt.utils.UIDUtil;
	
	import openfl.events.Event;
	import openfl.events.EventDispatcher;
	import openfl.events.IOErrorEvent;
	import openfl.events.ProgressEvent;
	import openfl.events.SecurityErrorEvent;
	import openfl.events.TimerEvent;
	import openfl.net.Socket;
	import openfl.system.Security;
	import openfl.utils.ByteArray;
	import openfl.utils.Endian;
	import openfl.utils.Timer;
	import openfl.errors.Error;
	//event metdata declare
	/** Dispatched when a new MQTT server is connected. */
	//[Event(name="mqttConnect", type="com.mqtt.core.MQTTEvent")]

	/** Dispatched when a new  MQTT server is closed. */
	//[Event(name="mqttClose", type="com.mqtt.core.MQTTEvent")]

	/** Dispatched when a new MQTT server is messag-ed. */
	//[Event(name="mqttMessage", type="com.mqtt.core.MQTTEvent")]

	/** Dispatched when a new  MQTT server is error-ed. */
	//[Event(name="mqttError", type="com.mqtt.core.MQTTEvent")]
	
	/** Dispatched when a new  PUBLISH is received. */
	//[Event(name="mqttPublish", type="com.mqtt.core.MQTTEvent")]
	/**
	 * Pure Action Script 3 that implements the MQTT (Message Queue Telemetry Transport) protocol, a lightweight protocol for publish/subscribe messaging. </br>
	 * AS3 socket is a mechanism used to send data over a network (e.g. the Internet), it is the combination of an IP address and a port. </br>
	 * @see http://public.dhe.ibm.com/software/dw/webservices/ws-mqtt/mqtt-v3r1.html
	 * @see http://public.dhe.ibm.com/software/dw/webservices/ws-mqtt/MQTT_V3.1_Protocol_Specific.pdf
	 * @see http://mosquitto.org/download/
	 * @see https://www.ibm.com/developerworks/mydeveloperworks/blogs/messaging/entry/write_your_own_mqtt_client_without_using_any_api_in_minutes1?lang=en
	 *
	 * @author yangboz
	 * @langVersion 3.0
	 * @playerVersion 11.2+
	 * @airVersion 3.2+
	 * Created Nov 22, 2012 4:14:14 PM
	 */
	class MQTTSocket extends EventDispatcher
	{
		//--------------------------------------------------------------------------
		//
		//  Variables
		//
		//--------------------------------------------------------------------------
		private var socket:Socket; /* holds the socket */
		/**
		 *@see http://mqtt.org/wiki/doku.php/add_messageid_to_ping 
		 */		
		private var msgid:Int=1; /* counter for message id */
		/**
		 *@see http://mqtt.org/wiki/doku.php/keepalive_for_the_client 
		 */		
		public var keepalive:Int=10; /* default keepalive timmer */
		public var timesinceping:UInt; /* host unix time, used to detect disconects */
//		public var topics:Array = []; /* used to store currently subscribed topics */
		/**
		 * The topic name is a UTF-encoded string. See the section on MQTT and UTF-8 for more information. </br>
		 * Topic name has an upper length limit of 32,767 characters. </br>
		 * @see http://mqtt.org/wiki/doku.php/overlapping_topics 
		 */		
		public var topics:Array<String>=new Array<String>(); /* used to store currently subscribed topics */
		public var debug:Bool=false; /* should output debug messages */
//		public var address:String;	/* broker address */
		//Notice: You need to define a cross domain policy file at your remote server root document, or have a policy file server on the target. 
		/**
		 * A fully qualified DNS domain name or an IP address. 
		 * IPv4 addresses are specified in dot-decimal notation, such as 192.0.2.0. 
		 * In Flash Player 9.0.115.0 and AIR 1.0 and later, you can specify IPv6 addresses using hexadecimal-colon notation, 
		 * such as 2001:db8:ccc3:ffff:0:444d:555e:666f. 
		 * You can also specify null to connect to the host server on which the SWF file resides. 
		 * If the SWF file issuing this call is running in a web browser, 
		 * host must be in the domain from which the SWF file originated. </br>
		 * @see http://mqtt.org/wiki/doku.php/short_usernames_and_passwords 
		 */		
		public var host:String; /* broker address */
		/**
		 * The TCP port number on the target host used to establish a connection. 
		 * In Flash Player 9.0.124.0 and later, the target host must serve a socket policy file specifying 
		 * that socket connections are permitted from the host serving the SWF file to the specified port. 
		 * In earlier versions of Flash Player, 
		 * a socket policy file is required only if you want to connect to a port number below 1024, 
		 * or if you want to connect to a host other than the one serving the SWF file. </br>
		 * @see http://mqtt.org/wiki/doku.php/short_usernames_and_passwords 
		 */		
		public var port:Float; /* broker port */
		/**
		 * The first UTF-encoded string.</br>
		 * The Client Identifier (Client ID) is between 1 and 23 characters long, </br>
		 * and uniquely identifies the client to the server.</br>
		 * It must be unique across all clients connecting to a single server,</br>
		 * and is the key in handling Message IDs messages with QoS levels 1 and 2.</br>
		 * If the Client ID contains more than 23 characters, the server responds to the CONNECT message </br>
		 * with a CONNACK return code 2: Identifier Rejected..</br>
		 * @see http://mqtt.org/wiki/doku.php/clientid_autogeneration
		 */
		public var clientid:String; /* client id sent to brocker */
		public var will:Map<String,UInt> = new Map<String,UInt>(); /* stores the will of the client {willFlag,willQos,willRetainFlag} */
		public var username:String; /* stores username */
		public var password:String; /* stores password */
//		public var QoS:Int=0; /* stores QoS level */ conflict with param of function
		public var cleanSession:Bool=true; /* as3 socket fluse auto clean */
		/**
		 * The topic name is present in the variable header of an MQTT PUBLISH message.</br>
		 * The topic name is the key that identifies the information channel to which payload data is published.</br>
		 * Subscribers use the key to identify the information channels on which they want to receive published information.</br>
		 * The topic name is a UTF-encoded string. See the section on MQTT and UTF-8 for more information.</br>
		 * Topic name has an upper length limit of 32,767 characters.</br>
		 * @see http://mqtt.org/wiki/doku.php/are_topics_dynamic
		 * */
		//The topic name is present in the variable header of an MQTT PUBLISH message.
		public var topicname:String="RoYan_／"; /* default stores topic name */
		
		//MQTT byte array prepare.
		
		//@see https://www.ibm.com/developerworks/mydeveloperworks/blogs/messaging/entry/write_your_own_mqtt_client_without_using_any_api_in_minutes1?lang=en
		//First let's inline varruct the MQTT messages that need to be sent:
		private var connectMessage:MQTTProtocol;
		private var publishMessage:MQTTProtocol;
		private var pubackMessage:MQTTProtocol;
		private var pubrelMessage:MQTTProtocol;
		private var subscribeMessage:MQTTProtocol;
		private var unsubscribeMessage:MQTTProtocol;
		private var disconnectMessage:MQTTProtocol;
		private var pingMessage:MQTTProtocol;
		
		//The Keep Alive timer is present in the variable header of a MQTT CONNECT message.
		
		private var keep_alive_timer:Timer; //Set to 10 seconds (0x000A).
		private var servicing:Bool; /*service indicator*/
		private var _isConnect:Bool; /*socket connection indicator*/
		//----------------------------------
		//  CONSTANTS
		//----------------------------------
		private static inline var MAX_LEN_UUID:Int=23;
		private static inline var MAX_LEN_TOPIC:Int=7;
		private static inline var MAX_LEN_USERNAME:Int=12;
		//Topic level separator
		public static inline var TOPIC_LEVEL_SEPARATOR:String = "/";
		//Multi-level wildcard
		public static inline var TOPIC_M_LEVEL_WILDCARD:String = "#";
		//Single-level wildcard
		public static inline var TOPIC_S_LEVEL_WILDCARD:String = "+";
		//as3Logger
		//private static inline var LOG:ILogger=LogUtil.getLogger(MQTTSocket);

		//--------------------------------------------------------------------------
		//
		//  Public properties
		//
		//-------------------------------------------------------------------------- 
		/**
		 * Return MQTTSocket connection status code.
		 * @return 
		 */		
		public function getIsConnect():Bool
		{
			return _isConnect;
		}
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
		/**
		 * 
		 * @param host The MQTT broker host name.
		 * @param port The MQTT broker host port.
		 * @param topicname The MQTT broker default topic name.
		 * @param clientid The MQTT broker client ID.
		 * @param username Position: bits 6 of the Connect flags byte.
		 * @param password Position: bits 7 of the Connect flags byte.
		 * @param willRetain Position: bit 5 of the Connect flags byte.
		 * @param willQos Position: bits 4 and 3 of the Connect flags byte.
		 * @param willFlag Position: bit 2 of the Connect flags byte. 
		 * @param cleanSession Position: bit 1 of the Connect flags byte.
		 * 
		 */		
//		public function MQTTSocket(host:String=null, port:Int=1883, topicname:String=null, clientid:String=null, username:String=null, password:String=null,willRetain:Bool=true,willQos:Bool=true,willFlag:Bool=true,cleanSession:Bool=true)
		public function new(host:String=null, port:Int=1883,username:String=null, password:String=null, topicname:String=null, clientid:String=null, will:Bool=false,cleanSession:Bool=false)
		{
			//parameters store
			if (host != null) this.host=host; //TODO:ip and hostname regexp test or match function.
			if (port != null) this.port=port;
			if (topicname != null) 
			{
				if (topicname.length > MAX_LEN_TOPIC) throw new Error("Out of range "+MAX_LEN_TOPIC+"!");
				var pattern:EReg  = new EReg('/\\/|\\+|\\#/','i');
				if (!pattern.match(topicname)) throw new Error("Illegal topic name,include: "+(TOPIC_LEVEL_SEPARATOR+" "+TOPIC_M_LEVEL_WILDCARD+" "+TOPIC_S_LEVEL_WILDCARD));
				this.topicname=topicname;
			}
			if (clientid != null)
			{
				if (clientid.length > MAX_LEN_UUID) throw new Error("Out of range "+(MAX_LEN_UUID+" !"));
				this.clientid=clientid;
			}
			else
			{
				this.clientid=UIDUtil.createUID(); //Assure unique. and cut off the string length to 16.
				this.clientid=this.shortenString(this.clientid, MAX_LEN_UUID);
			}
			//Any out of range issue???
			//It is recommended that user names are kept to 12 characters or
			//fewer, but it is not required.
			if (username != null)
			{
				if (username.length > MAX_LEN_USERNAME) throw new Error("Out of range "+(MAX_LEN_USERNAME+" !"));
				this.username=username;
			}
			if (password != null)
			{
				if (password.length > MAX_LEN_USERNAME) throw new Error("Out of range "+(MAX_LEN_USERNAME+" !"));
				this.password=password;
			}
			//this.publishMessage.writeUTFBytes("HELLO"); // (0x48, 0x45 , 0x4c , 0x4c, 0x4f); //HELLO is the message
			//Will flag/Qos/Retain
			if (will) this.will = MQTTProtocol.WILL;
			//Clean Session flag,Set (1).
			if (cleanSession) this.cleanSession = cleanSession;
			//Notice: You need to define a cross domain policy file at your remote server root document, or have a policy file server on the target. 
			//Security.allowDomain("*");
			//			Security.loadPolicyFile("http://www.lookbackon.com/crossdomain.xml");  
			//event listeners
			socket=new Socket(host, port);
			
			socket.addEventListener(Event.CONNECT, onConnect); //dispatched when the connection is established
			socket.addEventListener(Event.CLOSE, onClose); //dispatched when the connection is closed
			socket.addEventListener(IOErrorEvent.IO_ERROR, onError); //dispatched when an error occurs
			socket.addEventListener(ProgressEvent.SOCKET_DATA, onSocketData); //dispatched when socket can be read
			socket.addEventListener(SecurityErrorEvent.SECURITY_ERROR, onSecError); //dispatched when security gets in the way
			//Timer for ping function.
			
			//If a client does not receive a PINGRESP message within a Keep Alive time period after
			//sending a PINGREQ, it should close the TCP/IP socket connection.
			keep_alive_timer=new Timer(keepalive / 2 * 1000);
			keep_alive_timer.addEventListener(TimerEvent.TIMER, onPing);

		}

		//--------------------------------------------------------------------------
		//
		//  Public methods
		//
		//--------------------------------------------------------------------------
		/**
		 * 
		 * @param topicnames The topic name is present in the variable header of an MQTT PUBLISH message.
		 * @param Qoss Qos levels
		 * @param QoS Current Qos level.
		 * 
		 */		
		public function subscribe(topicnames:Array<String>, Qoss:Array<Int>, QoS:Int=0):Void
		{
			//subscribe list store,and subscribe to socket server.
			var bytes:ByteArray = new ByteArray();
			
			if( QoS ) msgid++;
			bytes.writeByte(msgid >> 8);
			bytes.writeByte(msgid % 256);
			
			var i:Int;
			var pattern:EReg = new EReg('/\\/|\\+|\\#/',"i");
			
			for(i in 0...topicnames.length){
				//TODO:Nomore validation on topic name,according to MQTT_SPEC document.
				/*A UTF-encoded string.
					This must not contain Topic wildcard characters.
					When received by a client that subscribed using wildcard characters, this string will
					be the absolute topic specified by the originating publisher and not the subscription
					string used by the client.*/
//				if (topicnames[i].search(pattern) != -1)
//					throw new Error("Illegal topic name,include: "+(TOPIC_LEVEL_SEPARATOR,TOPIC_M_LEVEL_WILDCARD,TOPIC_S_LEVEL_WILDCARD));
//				if (topicnames[i].length > MAX_LEN_TOPIC)
//					throw new Error("Out of range "+(MAX_LEN_TOPIC, "!"));
				
				writeString(bytes, topicnames[i]);
				bytes.writeByte(Qoss[i]);
			}
			//TODO:send subscribe message
			var type:Int=MQTTProtocol.SUBSCRIBE;
				type += (QoS << 1);
			this.subscribeMessage=new MQTTProtocol();
			this.subscribeMessage.writeMessageType(type);
			this.subscribeMessage.writeMessageValue(bytes);
			//
			socket.writeBytes(this.subscribeMessage);
			socket.flush();
			
			trace("Subscribe sent");
		}
		/**
		 * @param topicnames unsubscribed topic names.
		 * @param QoS current Qos level
		 */		
		public function unsubscribe(topicnames:Array<String>, QoS:Int=0):Void
		{
			//unubscribe list store,and unubscribe to socket server.
			var bytes:ByteArray = new ByteArray();
			if( QoS ) msgid++;
				bytes.writeByte(msgid >> 8);
				bytes.writeByte(msgid % 256);
			var pattern:EReg = new EReg('/\\/|\\+|\\#/','i');
			var i:Int;
			for(i in 0...topicnames.length){
				if (topicnames[i].search(pattern) != -1)
					throw new Error("Illegal topic name,include: "+(TOPIC_LEVEL_SEPARATOR+" "+TOPIC_M_LEVEL_WILDCARD+" "+TOPIC_S_LEVEL_WILDCARD));
				if (topicnames[i].length > MAX_LEN_TOPIC)
					throw new Error("Out of range "+(MAX_LEN_TOPIC+" !"));
				
				writeString(bytes, topicnames[i]);
			}
			//TODO:send unubscribe message
			var type:Int=MQTTProtocol.UNSUBSCRIBE;
			if (QoS)
				type+=QoS << 1;
			this.unsubscribeMessage=new MQTTProtocol();
			this.unsubscribeMessage.writeMessageType(type);
			this.unsubscribeMessage.writeMessageValue(bytes);
			//
			
			socket.writeBytes(this.unsubscribeMessage);
			socket.flush();

			trace("UnSsbscribe sent");
		}
		
		//
		/**
		 * A PUBLISH message is sent by a client to a server for distribution to Interested subscribers.
		 * @param topicname Each PUBLISH message is associated with a topic name (also known as the Subject or Channel). This is a hierarchical name space that defines a taxonomy of information sources for which subscribers can register an Interest
		 * @param message A message that is published to a specific topic name is delivered to connected subscribers for that topic.
		 * @param QoS Qos level.
		 * @param DUP Set to zero (0). This means that the message is being sent for the first time. See DUP for more details.
		 * @param retain Set to zero. This means do not retain. See Retain for more details.
		 */		
		public function publish(topicname:String, message:String, QoS:Int=0, retain:Int=0):Void
		{
			var pattern:EReg = new EReg('/\\/|\\+|\\#/','i');
			if (topicname.search(pattern) != -1)
				throw new Error("Illegal topic name,include: "+TOPIC_LEVEL_SEPARATOR+" "+TOPIC_M_LEVEL_WILDCARD+" "+TOPIC_S_LEVEL_WILDCARD);
			//TODO:socket sever response detect.
			var bytes:ByteArray=new ByteArray();
			writeString(bytes, topicname);
			//
			if (QoS)
			{
				msgid++;
				bytes.writeByte(msgid >> 8);
				bytes.writeByte(msgid % 256);
			}
			//
			writeString(bytes, message);
			//
			var type:Int=MQTTProtocol.PUBLISH;
				type += (QoS << 1);
			if (retain)
				type += 1;
			this.publishMessage=new MQTTProtocol();
			this.publishMessage.writeMessageType(type);
			this.publishMessage.writeMessageValue(bytes);
			//
			trace("MQTT publishMessage.length:{0}", this.publishMessage.length);
			this.socket.writeBytes(this.publishMessage, 0, this.publishMessage.length);
			this.socket.flush();
			
			//
			trace("Publish sent");
		}
		/**
		 * @param host The MQTT socket required host name.
		 * @param port The MQTT socket required host port.
		 */		
		public function connect(host:String=null, port:Int=0):Void
		{
			if (host)
				this.host=host; //TODO:ip and hostname regexp test or match function.
			if (port)
				this.port=port;
			//
			socket.connect(this.host, this.port);
		}

		/* disconnect: sends a proper disconect command */
		/**
		 * The DISCONNECT message is sent from the client to the server to indicate that 
		 * it is about to close its TCP/IP connection. This allows for a clean disconnection, 
		 * rather than just dropping the line.
		 * If the client had connected with the clean session flag set, 
		 * then all previously maIntained information about the client will be discarded.
		 * A server should not rely on the client to close the TCP/IP connection after receiving a DISCONNECT. 
		 */		
		public function close():Void
		{
			if (this.disconnectMessage == null)
			{
				this.disconnectMessage=new MQTTProtocol();
				this.disconnectMessage.writeType(MQTTProtocol.DISCONNECT);
			}
			socket.writeBytes(this.disconnectMessage);
			socket.flush();
			socket.close();
			//dispatch event
			this.dispatchEvent(new MQTTEvent(MQTTEvent.CLOSE, false, false));
		}
		
		//--------------------------------------------------------------------------
		//
		//  Protected methods
		//
		//--------------------------------------------------------------------------
		private function writeString(bytes:ByteArray, str:String):Void
		{
			var len:Int=str.length;
			var msb:Int=len >> 8;
			var lsb:Int=len % 256;
			bytes.writeByte(msb);
			bytes.writeByte(lsb);
			bytes.writeMultiByte(str, 'utf-8');
		}

		//
		private function onConnect(event:Event):Void
		{
			//			trace(event);
			//			socket.writeUTFBytes("GET / HTTP/1.1\n");
			//			socket.writeUTFBytes("Host: hejp.co.uk\n");
			//			socket.writeUTFBytes("\n");
			//			All data values are in big-endian order: higher order bytes precede lower order bytes.
			trace("MQTT byte order:{0}", this.socket.endian);
			if (this.socket.endian != Endian.BIG_ENDIAN)
			{
				throw new Error("Endian failed!");
			}
			if (this.connectMessage == null)
			{
				this.connectMessage=new MQTTProtocol();
				var bytes:ByteArray=new ByteArray();
				bytes.writeByte(0x00); //0
				bytes.writeByte(0x04); //6
				bytes.writeByte(0x4d); //M
				bytes.writeByte(0x51); //Q
				bytes.writeByte(0x54); //T
				bytes.writeByte(0x54); //T
				bytes.writeByte(0x04); //Protocol version = 3
				//Connect flags
				var type:Int=0;
				if (cleanSession)
					type+=2;
				//			Will flag is set (1)
				//			Will QoS field is 1
				//			Will RETAIN flag is clear (0)
				if (will != null)//(willFlag,willQos,willRetain)
				{
					type+=4;
					type+=this.will['qos'] << 3;
					if (this.will['retain'] != null) type+=32;
				}
				if (username != null) type+=128;
				if (password != null) type+=64;
				bytes.writeByte(type); //Clean session only
				
				//Keep Alive timer
				bytes.writeByte(keepalive >> 8); //Keepalive MSB
				bytes.writeByte(keepalive & 0xff); //Keepaliave LSB = 60
				writeString(bytes, clientid);
				writeString(bytes, (username != null) ? username : "");
				writeString(bytes, (password != null) ? password : "");
				this.connectMessage.writeMessageType(MQTTProtocol.CONNECT); //Connect
				this.connectMessage.writeMessageValue(bytes); //Connect
			}
			//
			trace("MQTT connectMesage.length:{0}", this.connectMessage.length);
			this.socket.writeBytes(this.connectMessage, 0, this.connectMessage.length);
			this.socket.flush();
			//dispatch event
			//just TCP/IP connection not MQTT connection
			//this.dispatchEvent(new MQTTEvent(MQTTEvent.CONNECT, false, false));
			this._isConnect = true;
		}

		//
		private function onClose(event:Event):Void
		{
			LOG.error("MQTT IO Error: {0}", event);
			// Security error is thrown if this line is excluded
			//dispatch event
			this.dispatchEvent(new MQTTEvent(MQTTEvent.CLOSE, false, false));
			//TODO:Other dispose staff
			keep_alive_timer.stop();
			this._isConnect = false;
		}

		//
		private function onError(event:IOErrorEvent):Void
		{
			LOG.error("MQTT IO Error: {0}", event);
			//dispatch event
			this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false));
		}

		//
		private function onSecError(event:SecurityErrorEvent):Void
		{
			LOG.error("MQTT Security Error: {0}", event);
			//dispatch event
			this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false));
		}

		//
		private function onPing(event:TimerEvent):Void
		{
			if (this.pingMessage == null)
			{
				this.pingMessage=new MQTTProtocol();
				
				this.pingMessage.writeMessageType(MQTTProtocol.PINGREQ);
				this.pingMessage.writeMessageValue(new ByteArray());
			}
			trace("MQTT pingMessage.length:{0}", this.pingMessage.length);
			socket.writeBytes(this.pingMessage, 0, this.pingMessage.length);
			
			socket.flush();
			trace("Ping sent.");
		}

		//
		private function onSocketData(event:ProgressEvent):Void
		{
			trace("MQTT Socket received {0}{1}", this.socket.bytesAvailable, " byte(s) of data.");
			// Loop over all of the received data, and only read a byte if there  is one available 
			
			while( socket.bytesAvailable ){
				//FixHead
				var result:MQTTProtocol=new MQTTProtocol();
					result.writeMessageFromBytes(socket);
				
				trace("Protocol Type:{0}", result.readType().toString(16));
				trace("Protocol Length:{0}", result.length);
				trace("Protocol DUP:{0}", result.readDUP());
				trace("Protocol QoS:{0}", result.readQoS());
				trace("Protocol RETAIN:{0}", result.readRETAIN());
				trace("Protocol RemainingLength:{0}", result.readRemainingLength());
				trace("Protocol Variable Header Length:{0}", result.readMessageValue().length);
				trace("Protocol PayLoad Length:{0}", result.readPayLoad().length);
				
				switch (result.readType())
				{
					case MQTTProtocol.CONNACK:
						onConnack(result);
						trace("Acknowledge connection request");
						break;
					case MQTTProtocol.PUBLISH:
						onPublish(result);
						trace("Publish message");
						break;
					case MQTTProtocol.PUBACK:
						onPuback(result);
						trace("Publish acknowledgment");
						break;
					case MQTTProtocol.PUBREC:
						onPubrec(result);
						trace("Assured publish received(part1)");
						break;
//					case MQTT_Protocol.PUBREL:
//						onPubrel(result);
//						trace("Assured publish release(part2)");
//						break;
					case MQTTProtocol.PUBCOMP:
						onPubcomp(result);
						trace("Assured publish complete(part3)");
						break;
					case MQTTProtocol.SUBSCRIBE:
						onSubscribe(result);
						trace("Subscribe to named topics");
						break;
					case MQTTProtocol.SUBACK:
						onSuback(result);
						trace("Subscription acknowledgement");
						break;
					case MQTTProtocol.UNSUBSCRIBE:
						onUnsubscribe(result);
						trace("Subscription acknowledgement");
						break;
					case MQTTProtocol.UNSUBACK:
						onUnsuback(result);
						trace("Unsubscribe acknowledgement");
						break;
					case MQTTProtocol.PINGREQ:
						onPingreq(result);
						trace("PING request");
						break;
					case MQTTProtocol.PINGRESP:
						onPingresp(result);
						trace("PING response");
						break;
					case MQTTProtocol.DISCONNECT:
						onDisconnect(result);
						trace("Client is Disconnecting");
						break;
					default:
						trace("Reserved");
						break;
				}
			}
		}

		//The CONNACK message is the message sent by the server in response to a CONNECT request from a client.
		private function onConnack(packet:MQTTProtocol):Void
		{
			var varHead:ByteArray = packet.readMessageValue();
				varHead.position=1;
			switch (varHead.readUnsignedByte())
			{
				case 0x00:
					LOG.debug("Socket connected");
					servicing=true;
					keep_alive_timer.start();
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.CONNECT, false, false,"Socket connected"));
					break;
				case 0x01:
					LOG.debug("Connection Refused: unacceptable protocol version");
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false, "Connection Refused: unacceptable protocol version"));
					break;
				case 0x02:
					LOG.debug("Connection Refused: identifier rejected");
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false, "Connection Refused: identifier rejected"));
					break;
				case 0x03:
					LOG.debug("Connection Refused: server unavailable");
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false, "Connection Refused: server unavailable"));
					break;
				case 0x04:
					LOG.debug("Connection Refused: bad user name or password");
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false, "Connection Refused: bad user name or password"));
					break;
				case 0x05:
					LOG.debug("Connection Refused: not authorized");
					//dispatch event
					this.dispatchEvent(new MQTTEvent(MQTTEvent.ERROR, false, false, "Connection Refused: not authorized"));
					break;
				default:
					LOG.debug("Reserved for future use");
					break;
			}
		}

		//TODO:
		private function onPublish(packet:MQTTProtocol):Void
		{
			//Fixed header
			//Variable header
			//Payload
			//Actions
			var varHead:ByteArray = packet.readMessageValue();
			var length:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
			var topicName:String = varHead.readMultiByte(length, "utf");
			if( packet.readQoS() ){
				var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
				trace("Publish Message ID {0}", messageId);
			}
			var payLoad:ByteArray = packet.readPayLoad();
			//length = (payLoad.readUnsignedByte() << 8) + payLoad.readUnsignedByte();
			//if( length > payLoad.length ){
			//	length = payLoad.length;
			//	payLoad.position = 0;
			//}
			var topicContent:String = payLoad.readMultiByte(payLoad.length, "utf-8");
			
			trace("Publish TopicName {0}", topicName);
			trace("Publish TopicContent {0}", topicContent);
			
			var bytes:ByteArray=new ByteArray();
			msgid++;
			bytes.writeByte(messageId >> 8);
			bytes.writeByte(messageId % 256);
			var type:Int=MQTTProtocol.PUBACK;
			type += (packet.readQoS() << 1);
			this.pubackMessage=new MQTTProtocol();
			this.pubackMessage.writeMessageType(type);
			this.pubackMessage.writeMessageValue(bytes);
			//
			trace("MQTT pubackMessage.length:{0}", this.pubackMessage.length);
			this.socket.writeBytes(this.pubackMessage, 0, this.pubackMessage.length);
			this.socket.flush();
			
			this.dispatchEvent(new MQTTEvent(MQTTEvent.PUBLISH, false, false, topicName + ":" + topicContent));
		}

		//A PUBACK message is the response to a PUBLISH message with QoS level 1. A PUBACK
		//		message is sent by a server in response to a PUBLISH message from a publishing client,
		//		and by a subscriber in response to a PUBLISH message from the server.
		private function onPuback(packet:MQTTProtocol):Void
		{
			//Fixed header
			switch(packet.readRemainingLength()){
				case 0x02:
					//Variable header
					var varHead:ByteArray = packet.readMessageValue();
					var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
					trace("Puback Message ID {0}", messageId);
					break;
				default:
					break;
			}
			//Payload
			//Actions
		}

		//TODO:
		private function onPubrec(packet:MQTTProtocol):Void
		{
			//Fixed header
			switch(packet.readRemainingLength()){
				case 0x02:
					//Variable header
					var varHead:ByteArray = packet.readMessageValue();
					var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
					trace("Pubrec Message ID {0}", messageId);
					
					var bytes:ByteArray=new ByteArray();
					writeString(bytes, topicname);
					//
					msgid++;
					bytes.writeByte(messageId >> 8);
					bytes.writeByte(messageId % 256);
					var type:Int=MQTTProtocol.PUBREL;
					type += (1 << 1);
					this.pubrelMessage=new MQTTProtocol();
					this.pubrelMessage.writeMessageType(type);
					this.pubrelMessage.writeMessageValue(bytes);
					//
					trace("Assured publish release(part2)");
					trace("MQTT pubrelMessage.length:{0}", this.pubrelMessage.length);
					this.socket.writeBytes(this.pubrelMessage, 0, this.pubrelMessage.length);
					this.socket.flush();
					break;
				default:
					break;
			}
			//Payload
			//Actions
		}

		//TODO:
		private function onPubrel(packet:MQTTProtocol):Void
		{
			//Fixed header
			switch(packet.readRemainingLength()){
				case 0x02:
					//Variable header
					var varHead:ByteArray = packet.readMessageValue();
					var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
					trace("Pubrel Message ID {0}", messageId);
					break;
				default:
					break;
			}
			//Payload
			//Actions
		}

		//TODO:
		private function onPubcomp(packet:MQTTProtocol):Void
		{
			//Fixed header
			switch(packet.readRemainingLength()){
				case 0x02:
					//Variable header
					var varHead:ByteArray = packet.readMessageValue();
					var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
					trace("Pubcomp Message ID {0}", messageId);
					break;
				default:
					break;
			}
			//Payload
			//Actions
		}

		//TODO:
		private function onSubscribe(packet:MQTTProtocol):Void
		{
			//Fixed header
			//Variable header
			//Payload
			//Actions
			var varHead:ByteArray=packet.readMessageValue();
			varHead.position=1;
			switch (varHead.readUnsignedByte())
			{
				case 0x00:
					break;
				default:
					break;
			}
		}

		//TODO:
		private function onSuback(packet:MQTTProtocol):Void
		{
			//Fixed header
			var payloadLen:Int = packet.readRemainingLength();
			//Variable header
			var varHead:ByteArray = packet.readMessageValue();
			var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
			trace("Suback Message ID {0}", messageId);
			//Payload
			var payload:ByteArray = packet.readPayLoad();
			var i:Int;
			for( i in 0...payload.length){
				var qos:Int = payload.readUnsignedByte() & 0x03;
				trace("Suback Topic {0} QoS {0}", i, qos);
			}
			//Actions
		}

		//TODO:
		private function onUnsubscribe(packet:MQTTProtocol):Void
		{
			//Fixed header
			//Variable header
			//Payload
			//Actions
			var varHead:ByteArray=packet.readMessageValue();
			varHead.position=1;
			switch (varHead.readUnsignedByte())
			{
				case 0x00:
					break;
				default:
					break;
			}
		}

		//TODO:
		private function onUnsuback(packet:MQTTProtocol):Void
		{
			//Fixed header
			switch(packet.readRemainingLength()){
				case 0x02:
					//Variable header( 2 bytes)
					var varHead:ByteArray = packet.readMessageValue();
					var messageId:UInt = (varHead.readUnsignedByte() << 8) + varHead.readUnsignedByte();
					trace("Unsuback Message ID {0}", messageId);
					break;
				default:
					break;
			}
			
			//Payload
			//Actions
		}

		//TODO:
		private function onPingreq(packet:MQTTProtocol):Void
		{
			//Only Fixed header
			switch (packet.readRemainingLength())
			{
				case 0x00:
					break;
				default:
					break;
			}
			//Variable header
			//Payload
			//Actions
		}

		//TODO:
		private function onPingresp(packet:MQTTProtocol):Void
		{
			//Only Fixed header
			switch (packet.readRemainingLength())
			{
				case 0x00:
					break;
				default:
					break;
			}
			//Variable header
			//Payload
			//Actions
		}
		
		//TODO:
		private function onDisconnect(packet:MQTTProtocol):Void
		{
			//Only Fixed header
			switch (packet.readRemainingLength())
			{
				case 0x00:
					break;
				default:
					break;
			}
			//Variable header
			//Payload
			//Actions
		}
		//--------------------------------------------------------------------------
		//
		//  Private methods
		//
		//--------------------------------------------------------------------------



		/**
		 * @see http://mqtt.org/wiki/doku.php/short_usernames_and_passwords
		 */		
		private function shortenString(str:String, len:Int):String
		{
			var result:String=str;
			if (str.length > len)
			{
				result=str.substr(0, len);
			}
			return result;
		}
	}
