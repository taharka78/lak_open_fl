package src.com.lak.simulator.isometric.entities.states.units;
import src.com.lak.simulator.isometric.entities.interfaces.IState;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Walk implements IState
{
	public function new() {}
	
	public function doAction(o:IsoObject):Void{
		o.setState(this);
	}	
}