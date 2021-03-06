// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class Mount
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var id_mount_category : Int;
	public var name : String;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(id_mount_category:Int, name:String) : Void
	{
		this.id_mount_category = id_mount_category;
		this.name = name;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `mount` SET '
				+  '`id_mount_category` = ' + db.quote(id_mount_category)
				+', `name` = ' + db.quote(name)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}