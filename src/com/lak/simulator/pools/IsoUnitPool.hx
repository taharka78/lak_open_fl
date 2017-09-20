package com.lak.simulator.pools;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.isometric.entities.units.IsoUnit;

class IsoUnitPool
{
	private static var MAX_VALUE:Int; 
    private static var GROWTH_VALUE:Int; 
    private static var counter:Int; 
    private static var pool:Array<IsoUnit>; 
    private static var currentEntity:IsoUnit; 
	
	public static function initialize( maxPoolSize:Int, growthValue:Int ):Void 
    { 
        MAX_VALUE = maxPoolSize; 
        GROWTH_VALUE = growthValue; 
        counter = maxPoolSize; 
            
        var i:Int = maxPoolSize; 
          
        pool = new Array<IsoUnit>(); 
        while( --i > -1 ) pool[i] = new IsoUnit(); 
    }
	
	public static function getEntity():IsoUnit 
        { 
            if ( counter > 0 ) 
                return currentEntity = pool[--counter]; 
                 
            var i:Int = GROWTH_VALUE; 
            while ( --i > -1 ) 
				pool.unshift ( new IsoUnit() );
			counter = GROWTH_VALUE; 
            return getEntity(); 
             
        } 
  
    public static function returnEntity(disposedUnit:IsoUnit):Void 
    { 
        pool[counter++] = disposedUnit; 
    } 
	
}