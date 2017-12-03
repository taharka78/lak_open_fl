// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class MountStatManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.MountStat>;

	function get_query() : orm.SqlQuery<com.lak.models.MountStat>
	{
		return new orm.SqlQuery<com.lak.models.MountStat>("mount_stat", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, id_stat_field:Int, value:Int, id_mount:Int) : com.lak.models.MountStat
	{
		var _obj = new com.lak.models.MountStat(db, orm);
		_obj.id = id;
		_obj.id_stat_field = id_stat_field;
		_obj.value = value;
		_obj.id_mount = id_mount;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.MountStat
	{
		var _obj = new com.lak.models.MountStat(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.id_stat_field = Reflect.field(d, 'id_stat_field');
		_obj.value = Reflect.field(d, 'value');
		_obj.id_mount = Reflect.field(d, 'id_mount');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.MountStat>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.MountStat
	{
		return getBySqlOne('SELECT * FROM `mount_stat` WHERE `id` = ' + db.quote(id));
	}

	public function create(id_stat_field:Int, value:Int, id_mount:Int) : com.lak.models.MountStat
	{
		db.query('INSERT INTO `mount_stat`(`id_stat_field`, `value`, `id_mount`) VALUES (' + db.quote(id_stat_field) + ', ' + db.quote(value) + ', ' + db.quote(id_mount) + ')');
		return newModelFromParams(db.lastInsertId(), id_stat_field, value, id_mount);
	}

	public function createNamed(data:{ id_stat_field:Int, value:Int, id_mount:Int }) : com.lak.models.MountStat
	{
		db.query('INSERT INTO `mount_stat`(`id_stat_field`, `value`, `id_mount`) VALUES (' + db.quote(data.id_stat_field) + ', ' + db.quote(data.value) + ', ' + db.quote(data.id_mount) + ')');
		return newModelFromParams(db.lastInsertId(), data.id_stat_field, data.value, data.id_mount);
	}

	public function createOptional(data:{ ?id_stat_field:Int, ?value:Int, ?id_mount:Int }) : com.lak.models.MountStat
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?id_stat_field:Int, ?value:Int, ?id_mount:Int }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'id_stat_field')) { fields.push('`id_stat_field`'); values.push(db.quote(data.id_stat_field)); }
		if (Reflect.hasField(data, 'value')) { fields.push('`value`'); values.push(db.quote(data.value)); }
		if (Reflect.hasField(data, 'id_mount')) { fields.push('`id_mount`'); values.push(db.quote(data.id_mount)); }
		db.query('INSERT INTO `mount_stat`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `mount_stat` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.MountStat>
	{
		return getBySqlMany('SELECT * FROM `mount_stat`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.MountStat
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.MountStat>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.MountStat> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_stat_field(id_stat_field:Int, _order:String=null) : Array<com.lak.models.MountStat>
	{
		return getBySqlMany('SELECT * FROM `mount_stat` WHERE `id_stat_field` = ' + db.quote(id_stat_field) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_mount(id_mount:Int, _order:String=null) : Array<com.lak.models.MountStat>
	{
		return getBySqlMany('SELECT * FROM `mount_stat` WHERE `id_mount` = ' + db.quote(id_mount) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}