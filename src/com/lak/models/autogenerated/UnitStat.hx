// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class UnitStat
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var id_fields : Int;
	public var id_unit : Int;
	public var value : Int;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(id_fields:Int, id_unit:Int, value:Int) : Void
	{
		this.id_fields = id_fields;
		this.id_unit = id_unit;
		this.value = value;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `unit_stat` SET '
				+  '`id_fields` = ' + db.quote(id_fields)
				+', `id_unit` = ' + db.quote(id_unit)
				+', `value` = ' + db.quote(value)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}