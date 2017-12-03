// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class ResearchManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.Research>;

	function get_query() : orm.SqlQuery<com.lak.models.Research>
	{
		return new orm.SqlQuery<com.lak.models.Research>("research", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, name:String, id_research_category:Int, id_target:Int) : com.lak.models.Research
	{
		var _obj = new com.lak.models.Research(db, orm);
		_obj.id = id;
		_obj.name = name;
		_obj.id_research_category = id_research_category;
		_obj.id_target = id_target;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.Research
	{
		var _obj = new com.lak.models.Research(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.name = Reflect.field(d, 'name');
		_obj.id_research_category = Reflect.field(d, 'id_research_category');
		_obj.id_target = Reflect.field(d, 'id_target');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.Research>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.Research
	{
		return getBySqlOne('SELECT * FROM `research` WHERE `id` = ' + db.quote(id));
	}

	public function create(name:String, id_research_category:Int, id_target:Int) : com.lak.models.Research
	{
		db.query('INSERT INTO `research`(`name`, `id_research_category`, `id_target`) VALUES (' + db.quote(name) + ', ' + db.quote(id_research_category) + ', ' + db.quote(id_target) + ')');
		return newModelFromParams(db.lastInsertId(), name, id_research_category, id_target);
	}

	public function createNamed(data:{ name:String, id_research_category:Int, id_target:Int }) : com.lak.models.Research
	{
		db.query('INSERT INTO `research`(`name`, `id_research_category`, `id_target`) VALUES (' + db.quote(data.name) + ', ' + db.quote(data.id_research_category) + ', ' + db.quote(data.id_target) + ')');
		return newModelFromParams(db.lastInsertId(), data.name, data.id_research_category, data.id_target);
	}

	public function createOptional(data:{ ?name:String, ?id_research_category:Int, ?id_target:Int }) : com.lak.models.Research
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?name:String, ?id_research_category:Int, ?id_target:Int }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'name')) { fields.push('`name`'); values.push(db.quote(data.name)); }
		if (Reflect.hasField(data, 'id_research_category')) { fields.push('`id_research_category`'); values.push(db.quote(data.id_research_category)); }
		if (Reflect.hasField(data, 'id_target')) { fields.push('`id_target`'); values.push(db.quote(data.id_target)); }
		db.query('INSERT INTO `research`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `research` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.Research>
	{
		return getBySqlMany('SELECT * FROM `research`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.Research
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.Research>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.Research> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_research_category(id_research_category:Int, _order:String=null) : Array<com.lak.models.Research>
	{
		return getBySqlMany('SELECT * FROM `research` WHERE `id_research_category` = ' + db.quote(id_research_category) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}