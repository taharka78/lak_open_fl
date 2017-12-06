// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class WeaponType
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;
	public var id_category : String;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String, id_category:String) : Void
	{
		this.name = name;
		this.id_category = id_category;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `weapon_type` SET '
				+  '`name` = ' + db.quote(name)
				+', `id_category` = ' + db.quote(id_category)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}