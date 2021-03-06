// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class Strength
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;
	public var value : Int;
	public var id_stat_field : Int;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String, value:Int, id_stat_field:Int) : Void
	{
		this.name = name;
		this.value = value;
		this.id_stat_field = id_stat_field;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `strength` SET '
				+  '`name` = ' + db.quote(name)
				+', `value` = ' + db.quote(value)
				+', `id_stat_field` = ' + db.quote(id_stat_field)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}