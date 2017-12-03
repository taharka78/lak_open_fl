// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class BodyParts
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String) : Void
	{
		this.name = name;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `body_parts` SET '
				+  '`name` = ' + db.quote(name)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}