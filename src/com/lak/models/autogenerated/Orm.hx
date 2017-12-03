// This is autogenerated file. Do not edit!

package com.lak.models.autogenerated;

class Orm
{
	public var bodyParts(default, null) : com.lak.models.BodyPartsManager;
	public var buildingResearch(default, null) : com.lak.models.BuildingResearchManager;
	public var buildingStats(default, null) : com.lak.models.BuildingStatsManager;
	public var buildings(default, null) : com.lak.models.BuildingsManager;
	public var buildingsCategory(default, null) : com.lak.models.BuildingsCategoryManager;
	public var buildingsCost(default, null) : com.lak.models.BuildingsCostManager;
	public var buildingsStatFields(default, null) : com.lak.models.BuildingsStatFieldsManager;
	public var civiizationStat(default, null) : com.lak.models.CiviizationStatManager;
	public var civilization(default, null) : com.lak.models.CivilizationManager;
	public var civilizationStatFields(default, null) : com.lak.models.CivilizationStatFieldsManager;
	public var diplomacyStates(default, null) : com.lak.models.DiplomacyStatesManager;
	public var equipment(default, null) : com.lak.models.EquipmentManager;
	public var heroCategory(default, null) : com.lak.models.HeroCategoryManager;
	public var heroSkillCategory(default, null) : com.lak.models.HeroSkillCategoryManager;
	public var heroSkillsStat(default, null) : com.lak.models.HeroSkillsStatManager;
	public var heroes(default, null) : com.lak.models.HeroesManager;
	public var heroesSkillsFields(default, null) : com.lak.models.HeroesSkillsFieldsManager;
	public var heroesStat(default, null) : com.lak.models.HeroesStatManager;
	public var heroesStatFields(default, null) : com.lak.models.HeroesStatFieldsManager;
	public var morality(default, null) : com.lak.models.MoralityManager;
	public var moralityFields(default, null) : com.lak.models.MoralityFieldsManager;
	public var moralityStat(default, null) : com.lak.models.MoralityStatManager;
	public var mount(default, null) : com.lak.models.MountManager;
	public var mountCategory(default, null) : com.lak.models.MountCategoryManager;
	public var mountStat(default, null) : com.lak.models.MountStatManager;
	public var mountStatFields(default, null) : com.lak.models.MountStatFieldsManager;
	public var needsCategories(default, null) : com.lak.models.NeedsCategoriesManager;
	public var player(default, null) : com.lak.models.PlayerManager;
	public var playerRessources(default, null) : com.lak.models.PlayerRessourcesManager;
	public var research(default, null) : com.lak.models.ResearchManager;
	public var researchCategory(default, null) : com.lak.models.ResearchCategoryManager;
	public var researchCost(default, null) : com.lak.models.ResearchCostManager;
	public var researchNeeds(default, null) : com.lak.models.ResearchNeedsManager;
	public var ressourcesType(default, null) : com.lak.models.RessourcesTypeManager;
	public var strength(default, null) : com.lak.models.StrengthManager;
	public var unitStat(default, null) : com.lak.models.UnitStatManager;
	public var unitStatsFields(default, null) : com.lak.models.UnitStatsFieldsManager;
	public var units(default, null) : com.lak.models.UnitsManager;
	public var unitsCost(default, null) : com.lak.models.UnitsCostManager;
	public var unitsType(default, null) : com.lak.models.UnitsTypeManager;
	public var weapon(default, null) : com.lak.models.WeaponManager;
	public var weaponCategory(default, null) : com.lak.models.WeaponCategoryManager;
	public var weaponStatFields(default, null) : com.lak.models.WeaponStatFieldsManager;
	public var weaponStats(default, null) : com.lak.models.WeaponStatsManager;
	public var weaponType(default, null) : com.lak.models.WeaponTypeManager;

	public function new(db:orm.Db) : Void
	{
		this.bodyParts = new com.lak.models.BodyPartsManager(db, cast this);
		this.buildingResearch = new com.lak.models.BuildingResearchManager(db, cast this);
		this.buildingStats = new com.lak.models.BuildingStatsManager(db, cast this);
		this.buildings = new com.lak.models.BuildingsManager(db, cast this);
		this.buildingsCategory = new com.lak.models.BuildingsCategoryManager(db, cast this);
		this.buildingsCost = new com.lak.models.BuildingsCostManager(db, cast this);
		this.buildingsStatFields = new com.lak.models.BuildingsStatFieldsManager(db, cast this);
		this.civiizationStat = new com.lak.models.CiviizationStatManager(db, cast this);
		this.civilization = new com.lak.models.CivilizationManager(db, cast this);
		this.civilizationStatFields = new com.lak.models.CivilizationStatFieldsManager(db, cast this);
		this.diplomacyStates = new com.lak.models.DiplomacyStatesManager(db, cast this);
		this.equipment = new com.lak.models.EquipmentManager(db, cast this);
		this.heroCategory = new com.lak.models.HeroCategoryManager(db, cast this);
		this.heroSkillCategory = new com.lak.models.HeroSkillCategoryManager(db, cast this);
		this.heroSkillsStat = new com.lak.models.HeroSkillsStatManager(db, cast this);
		this.heroes = new com.lak.models.HeroesManager(db, cast this);
		this.heroesSkillsFields = new com.lak.models.HeroesSkillsFieldsManager(db, cast this);
		this.heroesStat = new com.lak.models.HeroesStatManager(db, cast this);
		this.heroesStatFields = new com.lak.models.HeroesStatFieldsManager(db, cast this);
		this.morality = new com.lak.models.MoralityManager(db, cast this);
		this.moralityFields = new com.lak.models.MoralityFieldsManager(db, cast this);
		this.moralityStat = new com.lak.models.MoralityStatManager(db, cast this);
		this.mount = new com.lak.models.MountManager(db, cast this);
		this.mountCategory = new com.lak.models.MountCategoryManager(db, cast this);
		this.mountStat = new com.lak.models.MountStatManager(db, cast this);
		this.mountStatFields = new com.lak.models.MountStatFieldsManager(db, cast this);
		this.needsCategories = new com.lak.models.NeedsCategoriesManager(db, cast this);
		this.player = new com.lak.models.PlayerManager(db, cast this);
		this.playerRessources = new com.lak.models.PlayerRessourcesManager(db, cast this);
		this.research = new com.lak.models.ResearchManager(db, cast this);
		this.researchCategory = new com.lak.models.ResearchCategoryManager(db, cast this);
		this.researchCost = new com.lak.models.ResearchCostManager(db, cast this);
		this.researchNeeds = new com.lak.models.ResearchNeedsManager(db, cast this);
		this.ressourcesType = new com.lak.models.RessourcesTypeManager(db, cast this);
		this.strength = new com.lak.models.StrengthManager(db, cast this);
		this.unitStat = new com.lak.models.UnitStatManager(db, cast this);
		this.unitStatsFields = new com.lak.models.UnitStatsFieldsManager(db, cast this);
		this.units = new com.lak.models.UnitsManager(db, cast this);
		this.unitsCost = new com.lak.models.UnitsCostManager(db, cast this);
		this.unitsType = new com.lak.models.UnitsTypeManager(db, cast this);
		this.weapon = new com.lak.models.WeaponManager(db, cast this);
		this.weaponCategory = new com.lak.models.WeaponCategoryManager(db, cast this);
		this.weaponStatFields = new com.lak.models.WeaponStatFieldsManager(db, cast this);
		this.weaponStats = new com.lak.models.WeaponStatsManager(db, cast this);
		this.weaponType = new com.lak.models.WeaponTypeManager(db, cast this);
	}
}