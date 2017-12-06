// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class HeroesStatFields
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var id : Int;
	public var name : String;
	public var short_name : String;
	public var id_heroe_skills : String;

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	public function set(name:String, short_name:String, id_heroe_skills:String) : Void
	{
		this.name = name;
		this.short_name = short_name;
		this.id_heroe_skills = id_heroe_skills;
	}

	public function save() : Void
	{
		db.query(
			 'UPDATE `heroes_stat_fields` SET '
				+  '`name` = ' + db.quote(name)
				+', `short_name` = ' + db.quote(short_name)
				+', `id_heroe_skills` = ' + db.quote(id_heroe_skills)
			+' WHERE `id` = ' + db.quote(id)
			+' LIMIT 1'
		);
	}
}