// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class Heroes
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var id_civ : Int;
	public var id_hero_type : Int;
	public var name : String;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(id_civ:Int, id_hero_type:Int, name:String) : Void
	{
		this.id_civ = id_civ;
		this.id_hero_type = id_hero_type;
		this.name = name;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `heroes` SET '
				+  '`id_civ` = ' + db.quote(id_civ)
				+', `id_hero_type` = ' + db.quote(id_hero_type)
				+', `name` = ' + db.quote(name)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}