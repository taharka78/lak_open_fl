package com.lak.network;
import org.amqp.Connection;
import org.amqp.ConnectionParameters;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Producer
{
	private var conn:Connection;
	public function new() 
	{
		conn = new Connection(buildConnectionParams());
	}
	
	public function run(){
		conn.start();
		
	}
	
	private function buildConnectionParams():ConnectionParameters{
			var params:ConnectionParameters = new ConnectionParameters();
			
            params.username = "lak-dev";
            params.password = "lak-dev";
            params.vhostpath = "lak-dev-vhost";
            params.serverhost = "localhost";

            return params;
	}
	
}