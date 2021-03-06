// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class BuildingStats
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var id_buildings_stat_fields : Int;
	public var value : Int;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(id_buildings_stat_fields:Int, value:Int) : Void
	{
		this.id_buildings_stat_fields = id_buildings_stat_fields;
		this.value = value;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `building_stats` SET '
				+  '`id_buildings_stat_fields` = ' + db.quote(id_buildings_stat_fields)
				+', `value` = ' + db.quote(value)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}