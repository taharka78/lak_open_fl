package com.lak.simulator.command.ui;

/**
 * ...
 * @author Moussa & Sissoko
 */
import ru.stablex.ui.UIBuilder;
class CloseUICommand 
{

	public static function execute(id:String) 
	{
		Main.instance.removeChild(UIBuilder.get(id));
	}
	
}