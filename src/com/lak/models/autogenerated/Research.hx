// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class Research
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;
	public var id_research_category : Int;
	public var id_target : Int;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String, id_research_category:Int, id_target:Int) : Void
	{
		this.name = name;
		this.id_research_category = id_research_category;
		this.id_target = id_target;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `research` SET '
				+  '`name` = ' + db.quote(name)
				+', `id_research_category` = ' + db.quote(id_research_category)
				+', `id_target` = ' + db.quote(id_target)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}