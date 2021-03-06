// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class EquipmentManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.Equipment>;

	function get_query() : orm.SqlQuery<com.lak.models.Equipment>
	{
		return new orm.SqlQuery<com.lak.models.Equipment>("equipment", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, id_player:Int, id_hero:Int, id_weapon:Int, id_body_part:Int) : com.lak.models.Equipment
	{
		var _obj = new com.lak.models.Equipment(db, orm);
		_obj.id = id;
		_obj.id_player = id_player;
		_obj.id_hero = id_hero;
		_obj.id_weapon = id_weapon;
		_obj.id_body_part = id_body_part;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.Equipment
	{
		var _obj = new com.lak.models.Equipment(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.id_player = Reflect.field(d, 'id_player');
		_obj.id_hero = Reflect.field(d, 'id_hero');
		_obj.id_weapon = Reflect.field(d, 'id_weapon');
		_obj.id_body_part = Reflect.field(d, 'id_body_part');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.Equipment>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.Equipment
	{
		return getBySqlOne('SELECT * FROM `equipment` WHERE `id` = ' + db.quote(id));
	}

	public function create(id_player:Int, id_hero:Int, id_weapon:Int, id_body_part:Int) : com.lak.models.Equipment
	{
		db.query('INSERT INTO `equipment`(`id_player`, `id_hero`, `id_weapon`, `id_body_part`) VALUES (' + db.quote(id_player) + ', ' + db.quote(id_hero) + ', ' + db.quote(id_weapon) + ', ' + db.quote(id_body_part) + ')');
		return newModelFromParams(db.lastInsertId(), id_player, id_hero, id_weapon, id_body_part);
	}

	public function createNamed(data:{ id_player:Int, id_hero:Int, id_weapon:Int, id_body_part:Int }) : com.lak.models.Equipment
	{
		db.query('INSERT INTO `equipment`(`id_player`, `id_hero`, `id_weapon`, `id_body_part`) VALUES (' + db.quote(data.id_player) + ', ' + db.quote(data.id_hero) + ', ' + db.quote(data.id_weapon) + ', ' + db.quote(data.id_body_part) + ')');
		return newModelFromParams(db.lastInsertId(), data.id_player, data.id_hero, data.id_weapon, data.id_body_part);
	}

	public function createOptional(data:{ ?id_player:Int, ?id_hero:Int, ?id_weapon:Int, ?id_body_part:Int }) : com.lak.models.Equipment
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?id_player:Int, ?id_hero:Int, ?id_weapon:Int, ?id_body_part:Int }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'id_player')) { fields.push('`id_player`'); values.push(db.quote(data.id_player)); }
		if (Reflect.hasField(data, 'id_hero')) { fields.push('`id_hero`'); values.push(db.quote(data.id_hero)); }
		if (Reflect.hasField(data, 'id_weapon')) { fields.push('`id_weapon`'); values.push(db.quote(data.id_weapon)); }
		if (Reflect.hasField(data, 'id_body_part')) { fields.push('`id_body_part`'); values.push(db.quote(data.id_body_part)); }
		db.query('INSERT INTO `equipment`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `equipment` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.Equipment>
	{
		return getBySqlMany('SELECT * FROM `equipment`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.Equipment
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.Equipment>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.Equipment> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_hero(id_hero:Int) : com.lak.models.Equipment
	{
		return getBySqlOne('SELECT * FROM `equipment` WHERE `id_hero` = ' + db.quote(id_hero));
	}
	
	// FIXME : Duplicate class field declaration : getById_hero
	/*public function getById_hero(id_hero:Int, _order:String=null) : Array<com.lak.models.Equipment>
	{
		return getBySqlMany('SELECT * FROM `equipment` WHERE `id_hero` = ' + db.quote(id_hero) + (_order != null ? ' ORDER BY ' + _order : ''));
	}*/

	public function getById_weapon(id_weapon:Int, _order:String=null) : Array<com.lak.models.Equipment>
	{
		return getBySqlMany('SELECT * FROM `equipment` WHERE `id_weapon` = ' + db.quote(id_weapon) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_body_part(id_body_part:Int, _order:String=null) : Array<com.lak.models.Equipment>
	{
		return getBySqlMany('SELECT * FROM `equipment` WHERE `id_body_part` = ' + db.quote(id_body_part) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}