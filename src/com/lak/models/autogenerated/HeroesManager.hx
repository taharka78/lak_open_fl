// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class HeroesManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.Heroes>;

	function get_query() : orm.SqlQuery<com.lak.models.Heroes>
	{
		return new orm.SqlQuery<com.lak.models.Heroes>("heroes", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, id_civ:Int, id_hero_type:Int, name:String) : com.lak.models.Heroes
	{
		var _obj = new com.lak.models.Heroes(db, orm);
		_obj.id = id;
		_obj.id_civ = id_civ;
		_obj.id_hero_type = id_hero_type;
		_obj.name = name;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.Heroes
	{
		var _obj = new com.lak.models.Heroes(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.id_civ = Reflect.field(d, 'id_civ');
		_obj.id_hero_type = Reflect.field(d, 'id_hero_type');
		_obj.name = Reflect.field(d, 'name');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.Heroes>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.Heroes
	{
		return getBySqlOne('SELECT * FROM `heroes` WHERE `id` = ' + db.quote(id));
	}

	public function create(id_civ:Int, id_hero_type:Int, name:String) : com.lak.models.Heroes
	{
		db.query('INSERT INTO `heroes`(`id_civ`, `id_hero_type`, `name`) VALUES (' + db.quote(id_civ) + ', ' + db.quote(id_hero_type) + ', ' + db.quote(name) + ')');
		return newModelFromParams(db.lastInsertId(), id_civ, id_hero_type, name);
	}

	public function createNamed(data:{ id_civ:Int, id_hero_type:Int, name:String }) : com.lak.models.Heroes
	{
		db.query('INSERT INTO `heroes`(`id_civ`, `id_hero_type`, `name`) VALUES (' + db.quote(data.id_civ) + ', ' + db.quote(data.id_hero_type) + ', ' + db.quote(data.name) + ')');
		return newModelFromParams(db.lastInsertId(), data.id_civ, data.id_hero_type, data.name);
	}

	public function createOptional(data:{ ?id_civ:Int, ?id_hero_type:Int, ?name:String }) : com.lak.models.Heroes
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?id_civ:Int, ?id_hero_type:Int, ?name:String }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'id_civ')) { fields.push('`id_civ`'); values.push(db.quote(data.id_civ)); }
		if (Reflect.hasField(data, 'id_hero_type')) { fields.push('`id_hero_type`'); values.push(db.quote(data.id_hero_type)); }
		if (Reflect.hasField(data, 'name')) { fields.push('`name`'); values.push(db.quote(data.name)); }
		db.query('INSERT INTO `heroes`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `heroes` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.Heroes>
	{
		return getBySqlMany('SELECT * FROM `heroes`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.Heroes
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.Heroes>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.Heroes> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_civ(id_civ:Int, _order:String=null) : Array<com.lak.models.Heroes>
	{
		return getBySqlMany('SELECT * FROM `heroes` WHERE `id_civ` = ' + db.quote(id_civ) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_hero_type(id_hero_type:Int, _order:String=null) : Array<com.lak.models.Heroes>
	{
		return getBySqlMany('SELECT * FROM `heroes` WHERE `id_hero_type` = ' + db.quote(id_hero_type) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}