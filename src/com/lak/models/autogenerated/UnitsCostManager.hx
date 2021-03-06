// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class UnitsCostManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.UnitsCost>;

	function get_query() : orm.SqlQuery<com.lak.models.UnitsCost>
	{
		return new orm.SqlQuery<com.lak.models.UnitsCost>("units_cost", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, id_units:Int, id_ressource_type:Int, value:Int) : com.lak.models.UnitsCost
	{
		var _obj = new com.lak.models.UnitsCost(db, orm);
		_obj.id = id;
		_obj.id_units = id_units;
		_obj.id_ressource_type = id_ressource_type;
		_obj.value = value;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.UnitsCost
	{
		var _obj = new com.lak.models.UnitsCost(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.id_units = Reflect.field(d, 'id_units');
		_obj.id_ressource_type = Reflect.field(d, 'id_ressource_type');
		_obj.value = Reflect.field(d, 'value');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.UnitsCost>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.UnitsCost
	{
		return getBySqlOne('SELECT * FROM `units_cost` WHERE `id` = ' + db.quote(id));
	}

	public function create(id:Int, id_units:Int, id_ressource_type:Int, value:Int) : com.lak.models.UnitsCost
	{
		db.query('INSERT INTO `units_cost`(`id`, `id_units`, `id_ressource_type`, `value`) VALUES (' + db.quote(id) + ', ' + db.quote(id_units) + ', ' + db.quote(id_ressource_type) + ', ' + db.quote(value) + ')');
		return newModelFromParams(id, id_units, id_ressource_type, value);
	}

	public function createNamed(data:{ id:Int, id_units:Int, id_ressource_type:Int, value:Int }) : com.lak.models.UnitsCost
	{
		db.query('INSERT INTO `units_cost`(`id`, `id_units`, `id_ressource_type`, `value`) VALUES (' + db.quote(data.id) + ', ' + db.quote(data.id_units) + ', ' + db.quote(data.id_ressource_type) + ', ' + db.quote(data.value) + ')');
		return newModelFromParams(data.id, data.id_units, data.id_ressource_type, data.value);
	}

	public function createOptional(data:{ id:Int, ?id_units:Int, ?id_ressource_type:Int, ?value:Int }) : com.lak.models.UnitsCost
	{
		createOptionalNoReturn(data);
		return get(data.id);
	}

	public function createOptionalNoReturn(data:{ id:Int, ?id_units:Int, ?id_ressource_type:Int, ?value:Int }) : Void
	{
		var fields = [];
		var values = [];
		fields.push('`id`'); values.push(db.quote(data.id));
		if (Reflect.hasField(data, 'id_units')) { fields.push('`id_units`'); values.push(db.quote(data.id_units)); }
		if (Reflect.hasField(data, 'id_ressource_type')) { fields.push('`id_ressource_type`'); values.push(db.quote(data.id_ressource_type)); }
		if (Reflect.hasField(data, 'value')) { fields.push('`value`'); values.push(db.quote(data.value)); }
		db.query('INSERT INTO `units_cost`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `units_cost` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.UnitsCost>
	{
		return getBySqlMany('SELECT * FROM `units_cost`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.UnitsCost
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.UnitsCost>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.UnitsCost> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_units(id_units:Int, _order:String=null) : Array<com.lak.models.UnitsCost>
	{
		return getBySqlMany('SELECT * FROM `units_cost` WHERE `id_units` = ' + db.quote(id_units) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_ressource_type(id_ressource_type:Int, _order:String=null) : Array<com.lak.models.UnitsCost>
	{
		return getBySqlMany('SELECT * FROM `units_cost` WHERE `id_ressource_type` = ' + db.quote(id_ressource_type) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}