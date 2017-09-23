package src.com.lak.simulator.isometric.entities.interfaces;
import com.lak.simulator.isometric.entities.IsoObject;

/**
 * @author Youssouf & Moussa SISSOKO
 */
interface IState 
{
	public function doAction(obj:IsoObject):Void;
}