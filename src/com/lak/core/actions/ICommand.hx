package com.lak.core.actions;

/**
 * @author Moussa & Youssouf Sissoko
 */
interface ICommand 
{
	public function enter():Void;
	public function execute(actor:Any):Void;
	public function exit():Void;
}