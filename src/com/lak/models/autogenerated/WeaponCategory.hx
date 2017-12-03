// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class WeaponCategory
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;
	public var id_body_part : Int;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String, id_body_part:Int) : Void
	{
		this.name = name;
		this.id_body_part = id_body_part;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `weapon_category` SET '
				+  '`name` = ' + db.quote(name)
				+', `id_body_part` = ' + db.quote(id_body_part)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}