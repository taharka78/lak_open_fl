// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class DiplomacyStatesManager
{
	var db : orm.Db;
	var orm : com.lak.models.Orm;
	public var query(get, never) : orm.SqlQuery<com.lak.models.DiplomacyStates>;

	function get_query() : orm.SqlQuery<com.lak.models.DiplomacyStates>
	{
		return new orm.SqlQuery<com.lak.models.DiplomacyStates>("diplomacy_states", db, this);
	}

	public function new(db:orm.Db, orm:com.lak.models.Orm) : Void
	{
		this.db = db;
		this.orm = orm;
	}

	function newModelFromParams(id:Int, name:String) : com.lak.models.DiplomacyStates
	{
		var _obj = new com.lak.models.DiplomacyStates(db, orm);
		_obj.id = id;
		_obj.name = name;
		return _obj;
	}

	function newModelFromRow(d:Dynamic) : com.lak.models.DiplomacyStates
	{
		var _obj = new com.lak.models.DiplomacyStates(db, orm);
		_obj.id = Reflect.field(d, 'id');
		_obj.name = Reflect.field(d, 'name');
		return _obj;
	}

	public function where(field:String, op:String, value:Dynamic) : orm.SqlQuery<com.lak.models.DiplomacyStates>
	{
		return query.where(field, op, value);
	}

	public function get(id:Int) : com.lak.models.DiplomacyStates
	{
		return getBySqlOne('SELECT * FROM `diplomacy_states` WHERE `id` = ' + db.quote(id));
	}

	public function create(name:String) : com.lak.models.DiplomacyStates
	{
		db.query('INSERT INTO `diplomacy_states`(`name`) VALUES (' + db.quote(name) + ')');
		return newModelFromParams(db.lastInsertId(), name);
	}

	public function createNamed(data:{ name:String }) : com.lak.models.DiplomacyStates
	{
		db.query('INSERT INTO `diplomacy_states`(`name`) VALUES (' + db.quote(data.name) + ')');
		return newModelFromParams(db.lastInsertId(), data.name);
	}

	public function createOptional(data:{ ?name:String }) : com.lak.models.DiplomacyStates
	{
		createOptionalNoReturn(data);
		return get(db.lastInsertId());
	}

	public function createOptionalNoReturn(data:{ ?name:String }) : Void
	{
		var fields = [];
		var values = [];
		if (Reflect.hasField(data, 'name')) { fields.push('`name`'); values.push(db.quote(data.name)); }
		db.query('INSERT INTO `diplomacy_states`(' + fields.join(", ") + ') VALUES (' + values.join(", ") + ')');
	}

	public function delete(id:Int) : Void
	{
		db.query('DELETE FROM `diplomacy_states` WHERE `id` = ' + db.quote(id) + ' LIMIT 1');
	}

	public function getAll(_order:String=null) : Array<com.lak.models.DiplomacyStates>
	{
		return getBySqlMany('SELECT * FROM `diplomacy_states`' + (_order != null ? ' ORDER BY ' + _order : ''));
	}

	public function getBySqlOne(sql:String) : com.lak.models.DiplomacyStates
	{
		var rows = db.query(sql + ' LIMIT 1');
		if (rows.length == 0) return null;
		return newModelFromRow(rows.next());
	}

	public function getBySqlMany(sql:String) : Array<com.lak.models.DiplomacyStates>
	{
		var rows = db.query(sql);
		var list : Array<com.lak.models.DiplomacyStates> = [];
		for (row in rows)
		{
			list.push(newModelFromRow(row));
		}
		return list;
	}
}