
package com.lak.simulator.pools;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.isometric.entities.buildings.IsoBuilding;

class IsoBuildingPool
{
	private static var MAX_VALUE:Int; 
    private static var GROWTH_VALUE:Int; 
    private static var counter:Int; 
    private static var pool:Array<IsoBuilding>; 
    private static var currentEntity:IsoBuilding; 
	
	public static function initialize( maxPoolSize:Int, growthValue:Int ):Void 
    { 
        MAX_VALUE = maxPoolSize; 
        GROWTH_VALUE = growthValue; 
        counter = maxPoolSize; 
            
        var i:Int = maxPoolSize; 
          
        pool = new Array<IsoBuilding>(); 
        while( --i > -1 ) pool[i] = new IsoBuilding(); 
    }
	
	public static function getEntity():IsoBuilding 
    { 
		if ( counter > 0 ) 
                return currentEntity = pool[--counter]; 
                 
            var i:Int = GROWTH_VALUE; 
            while ( --i > -1 ) 
				pool.unshift ( new IsoBuilding() );
			counter = GROWTH_VALUE; 
            return getEntity(); 
             
	}
  
    public static function returnEntity(disposedBuilding:IsoBuilding):Void 
    { 
        pool[counter++] = disposedBuilding;
    } 
	
}