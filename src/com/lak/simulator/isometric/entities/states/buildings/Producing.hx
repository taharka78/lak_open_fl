package src.com.lak.simulator.isometric.entities.states.buildings;
import src.com.lak.simulator.isometric.entities.interfaces.IState;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 * Le batiment est en train de produire
 */
class Producing implements IState
{

	public function new(){}
	
	public function doAction(o:IsoObject):Void{
		o.setState(this);
	}	
	
}