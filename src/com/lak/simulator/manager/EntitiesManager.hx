package com.lak.simulator.manager;
import com.lak.entities.IsoObject;
import flash.geom.Point;
import openfl.geom.Rectangle;
import com.lak.IsoWorld;
import com.lak.entities.units.IsoUnit;
import com.lak.utils.IsoUtils;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class EntitiesManager
{
	private var world:IsoWorld;
	private var pt:Point = new Point();
	public var screen:Rectangle = new Rectangle();
	/*
	 * ENTITIESMANAGER __CONSTRUCTOR__ @descClasse qui va gérer toutes les actions à faire sur les isoobject contenu dans le monde iso
	 * @arg _world @type IsoWorld @desc instance de IsoWorld.
	 */
	public function new(_world:IsoWorld) {
		world = _world;
		updateViewBounds();
	}
	/*
	 * @funcname  run fonction de mise à jour du manager.
	 * @return Void.
	 */
	public function run(delta:Int):Void{
		for ( obj in world.worldObject){
			pt.x = obj.x;
			pt.y = obj.y;
			manageVisibility(obj);
			obj.update(delta);
			if (Std.is(obj, IsoUnit) && obj.visible == true){ manageShadow(obj); }
		}
	}
	/*
	 * @funcname  updateViewBounds fonction de mise à jour de la taille de l'écran du joueur.
	 * @return Void.
	 */
	public function updateViewBounds():Void{
		screen.width = world.VIEW_WIDTH;
		screen.height = world.VIEW_HEIGHT;
		screen.x = world.OFFSET_LIGNE_WORLD;
		screen.y = world.OFFSET_COLONNE_WORLD;
	}
	/*
	 * @funcname  manageShadow fonction de gestion des ombres des objets iso visibles.
	 * @arg obj @type IsoObject
	 * @return Void.
	 */
	public function manageShadow(obj:IsoObject):Void{
		if(obj.visible){  
			//if(!obj.clone){ (cast(obj,IsoUnit)).shadow();/*trace(" PATH  "+b.hasPath)*/; }
		}
	}
	/*
	 * @funcname  manageShadow fonction de gestion de l'affichage ou non d'un objet iso.
	 * @arg obj @type IsoObject
	 * @return Void.
	 */
	public function manageVisibility(obj:IsoObject){
		/*if(onScreen(pt)){
			if (!obj.clone){
				if(!obj.visible && !world.contains(obj)){ 
					obj.visible = true;
					world.addChild(obj);
				}
			}else{
					pt = IsoUtils.pxToPos(new Point(obj.x,obj.y),true);*/
					//var nd:Node = getNode(pt.x,pt.y);
					/*if(nd.type != "d"){
						if(obj.visible){ 
							obj.visible = falseBool;
							if(obj.parent) removeChild(obj); 
						}
					}*/
				/*}
			}else{ 
				obj.visible = false;*/
				//if(obj.parent) world.removeChild(obj);
			//}
	}
	public function onScreen(pt:Point):Bool{
		if(pt.x <= (-screen.x+screen.width) && pt.x >= -screen.x  && pt.y <= (-screen.y+screen.height) && pt.y >= -screen.y){ return true; }
		return false;
	}
	
}