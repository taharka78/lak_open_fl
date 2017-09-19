package com.lak.simulator.manager;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.renderers.GraphicRenderer;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class ArmyManager
{
	public var selectedUnits:Array<IsoUnit> = new Array<IsoUnit>();
	public function new() 
	{
		
	}
	/* @funcname selectUnit @desc Fonction de sélection d'une unité
	 * @arg _unit @type ISoUnit
	 */
	public function selectUnit(_unit:IsoUnit){
		if (selectedUnits.indexOf(_unit) == -1){
			selectedUnits.push(_unit);
		}
	}
	public function deselectUnits(){
		for(i in 0...selectedUnits.length){
			GraphicRenderer.instance.destroyEllipse(selectedUnits[i]);
		}
		selectedUnits = new Array<IsoUnit>();
	}
	
}