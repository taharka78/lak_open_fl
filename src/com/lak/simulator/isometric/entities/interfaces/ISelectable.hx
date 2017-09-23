package src.com.lak.simulator.isometric.entities.interfaces;

/**
 * @author Youssouf & Moussa SISSOKO
 * Cette interface défini si l'objet en question est selectionnable ou non
 */
interface ISelectable 
{
	// Si l'objet est selectionné ou non
	public var isSelected:Bool;
	// Action à réaliser quand l'objet est selectionné
	public function selected():Void;
	// Action à réaliser quand l'objet est déselectionner
	public function deselected():Void;
}