// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class WeaponManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.Weapon>;

	function get_query() : orm.SqlQuery<com.lak.models.Weapon>
	{
		return new orm.SqlQuery<com.lak.models.Weapon>("weapon", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, name:String, short_name:String, price:String, level:String, id_weapon_category:Int, id_weapon_type:Int, id_target_body_part:Int) : com.lak.models.Weapon
	{
		var _obj = new com.lak.models.Weapon(db, orm);
		_obj.id = id;
		_obj.name = name;
		_obj.short_name = short_name;
		_obj.price = price;
		_obj.level = level;
		_obj.id_weapon_category = id_weapon_category;
		_obj.id_weapon_type = id_weapon_type;
		_obj.id_target_body_part = id_target_body_part;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.Weapon
	{
		var _obj = new com.lak.models.Weapon(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.name = Reflect.field(d, 'name');
		_obj.short_name = Reflect.field(d, 'short_name');
		_obj.price = Reflect.field(d, 'price');
		_obj.level = Reflect.field(d, 'level');
		_obj.id_weapon_category = Reflect.field(d, 'id_weapon_category');
		_obj.id_weapon_type = Reflect.field(d, 'id_weapon_type');
		_obj.id_target_body_part = Reflect.field(d, 'id_target_body_part');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.Weapon>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.Weapon
	{
		return getBySqlOne('SELECT * FROM `weapon` WHERE `id` = ' + db.quote(id));
	}

	public function create(name:String, short_name:String, price:String, level:String, id_weapon_category:Int, id_weapon_type:Int, id_target_body_part:Int) : com.lak.models.Weapon
	{
		db.query('INSERT INTO `weapon`(`name`, `short_name`, `price`, `level`, `id_weapon_category`, `id_weapon_type`, `id_target_body_part`) VALUES (' + db.quote(name) + ', ' + db.quote(short_name) + ', ' + db.quote(price) + ', ' + db.quote(level) + ', ' + db.quote(id_weapon_category) + ', ' + db.quote(id_weapon_type) + ', ' + db.quote(id_target_body_part) + ')');
		return newModelFromParams(db.lastInsertId(), name, short_name, price, level, id_weapon_category, id_weapon_type, id_target_body_part);
	}

	public function createNamed(data:{ name:String, short_name:String, price:String, level:String, id_weapon_category:Int, id_weapon_type:Int, id_target_body_part:Int }) : com.lak.models.Weapon
	{
		db.query('INSERT INTO `weapon`(`name`, `short_name`, `price`, `level`, `id_weapon_category`, `id_weapon_type`, `id_target_body_part`) VALUES (' + db.quote(data.name) + ', ' + db.quote(data.short_name) + ', ' + db.quote(data.price) + ', ' + db.quote(data.level) + ', ' + db.quote(data.id_weapon_category) + ', ' + db.quote(data.id_weapon_type) + ', ' + db.quote(data.id_target_body_part) + ')');
		return newModelFromParams(db.lastInsertId(), data.name, data.short_name, data.price, data.level, data.id_weapon_category, data.id_weapon_type, data.id_target_body_part);
	}

	public function createOptional(data:{ ?name:String, ?short_name:String, ?price:String, ?level:String, ?id_weapon_category:Int, ?id_weapon_type:Int, ?id_target_body_part:Int }) : com.lak.models.Weapon
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?name:String, ?short_name:String, ?price:String, ?level:String, ?id_weapon_category:Int, ?id_weapon_type:Int, ?id_target_body_part:Int }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'name')) { fields.push('`name`'); values.push(db.quote(data.name)); }
		if (Reflect.hasField(data, 'short_name')) { fields.push('`short_name`'); values.push(db.quote(data.short_name)); }
		if (Reflect.hasField(data, 'price')) { fields.push('`price`'); values.push(db.quote(data.price)); }
		if (Reflect.hasField(data, 'level')) { fields.push('`level`'); values.push(db.quote(data.level)); }
		if (Reflect.hasField(data, 'id_weapon_category')) { fields.push('`id_weapon_category`'); values.push(db.quote(data.id_weapon_category)); }
		if (Reflect.hasField(data, 'id_weapon_type')) { fields.push('`id_weapon_type`'); values.push(db.quote(data.id_weapon_type)); }
		if (Reflect.hasField(data, 'id_target_body_part')) { fields.push('`id_target_body_part`'); values.push(db.quote(data.id_target_body_part)); }
		db.query('INSERT INTO `weapon`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `weapon` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.Weapon>
	{
		return getBySqlMany('SELECT * FROM `weapon`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.Weapon
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.Weapon>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.Weapon> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}

	public function getById_weapon_category(id_weapon_category:Int, _order:String=null) : Array<com.lak.models.Weapon>
	{
		return getBySqlMany('SELECT * FROM `weapon` WHERE `id_weapon_category` = ' + db.quote(id_weapon_category) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_weapon_type(id_weapon_type:Int, _order:String=null) : Array<com.lak.models.Weapon>
	{
		return getBySqlMany('SELECT * FROM `weapon` WHERE `id_weapon_type` = ' + db.quote(id_weapon_type) + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getById_target_body_part(id_target_body_part:Int, _order:String=null) : Array<com.lak.models.Weapon>
	{
		return getBySqlMany('SELECT * FROM `weapon` WHERE `id_target_body_part` = ' + db.quote(id_target_body_part) + (_order != null ? ' ORDER BY ' + _order : ''));
	}
}