// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class UnitsManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.Units>;

	function get_query() : orm.SqlQuery<com.lak.models.Units>
	{
		return new orm.SqlQuery<com.lak.models.Units>("units", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, id_type:Int, id_mount:Int, id_civ:Int, name:String) : com.lak.models.Units
	{
		var _obj = new com.lak.models.Units(db, orm);
		_obj.id = id;
		_obj.id_type = id_type;
		_obj.id_mount = id_mount;
		_obj.id_civ = id_civ;
		_obj.name = name;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.Units
	{
		var _obj = new com.lak.models.Units(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.id_type = Reflect.field(d, 'id_type');
		_obj.id_mount = Reflect.field(d, 'id_mount');
		_obj.id_civ = Reflect.field(d, 'id_civ');
		_obj.name = Reflect.field(d, 'name');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.Units>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.Units
	{
		return getBySqlOne('SELECT * FROM `units` WHERE `id` = ' + db.quote(id));
	}

	public function create(id_type:Int, id_mount:Int, id_civ:Int, name:String) : com.lak.models.Units
	{
		db.query('INSERT INTO `units`(`id_type`, `id_mount`, `id_civ`, `name`) VALUES (' + db.quote(id_type) + ', ' + db.quote(id_mount) + ', ' + db.quote(id_civ) + ', ' + db.quote(name) + ')');
		return newModelFromParams(db.lastInsertId(), id_type, id_mount, id_civ, name);
	}

	public function createNamed(data:{ id_type:Int, id_mount:Int, id_civ:Int, name:String }) : com.lak.models.Units
	{
		db.query('INSERT INTO `units`(`id_type`, `id_mount`, `id_civ`, `name`) VALUES (' + db.quote(data.id_type) + ', ' + db.quote(data.id_mount) + ', ' + db.quote(data.id_civ) + ', ' + db.quote(data.name) + ')');
		return newModelFromParams(db.lastInsertId(), data.id_type, data.id_mount, data.id_civ, data.name);
	}

	public function createOptional(data:{ ?id_type:Int, ?id_mount:Int, ?id_civ:Int, ?name:String }) : com.lak.models.Units
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?id_type:Int, ?id_mount:Int, ?id_civ:Int, ?name:String }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'id_type')) { fields.push('`id_type`'); values.push(db.quote(data.id_type)); }
		if (Reflect.hasField(data, 'id_mount')) { fields.push('`id_mount`'); values.push(db.quote(data.id_mount)); }
		if (Reflect.hasField(data, 'id_civ')) { fields.push('`id_civ`'); values.push(db.quote(data.id_civ)); }
		if (Reflect.hasField(data, 'name')) { fields.push('`name`'); values.push(db.quote(data.name)); }
		db.query('INSERT INTO `units`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `units` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.Units>
	{
		return getBySqlMany('SELECT * FROM `units`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.Units
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.Units>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.Units> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_type(id_type:Int, _order:String=null) : Array<com.lak.models.Units>
	{
		return getBySqlMany('SELECT * FROM `units` WHERE `id_type` = ' + db.quote(id_type) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_mount(id_mount:Int, _order:String=null) : Array<com.lak.models.Units>
	{
		return getBySqlMany('SELECT * FROM `units` WHERE `id_mount` = ' + db.quote(id_mount) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_civ(id_civ:Int, _order:String=null) : Array<com.lak.models.Units>
	{
		return getBySqlMany('SELECT * FROM `units` WHERE `id_civ` = ' + db.quote(id_civ) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}