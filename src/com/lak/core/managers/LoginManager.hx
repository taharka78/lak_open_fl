package com.lak.core.managers;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class LoginManager 
{
	var connector:Connector;
	private static var loginAttempt:Int = 0;
	private inline var LOGIN_ATTEMPT_LIMIT = 100;
	
	public function new() 
	{
		
	}
	
	public static function connect(login:String, pwd:String):Bool
	{
		if ( connector.tryLogin(login, pwd) ){
			trace("Connected");
			return true;
			
		}else{
			trace("Attempt to login failed");
			++loginAttempt;
			if (loginAttempt > LOGIN_ATTEMPT_LIMIT)
			{
				trace("Try to brute force. Lock account for " , account, " seconds" ); 
			}
			
			return false;
		}
	}
}