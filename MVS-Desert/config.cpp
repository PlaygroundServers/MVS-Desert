class CfgPatches
{
    class MVS_Desert
	{
        units[]={};
        weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Characters_Vests","DZ_Characters_Backpacks","DZ_Scripts","DZ_Characters","DZ_Gear_Drinks","DZ_Gear_Medical","DZ_Gear_Containers","ModularVestSystem"};
    };
};
class CfgMods
{
	class MVS_Desert
	{
		dir = "MVS-Desert";
		extra = 0;
		type = "mod";
		name = "MVS_Desert";
		tooltip = "MVS-Desert";
		author = "RedFalcon & GumbyMN";
		authorID = "";
		version = "1.0.0";
	};
};
class cfgVehicles
{
	class MVS_Canteen_Base;
	class MVS_Cap_Base;
	class MVS_WarriorHelmet_Base;
	class MVS_CombatShirt_Base;
	class MVS_CombatPants_Base;
	class ModularVestSystem_Base;
	class ModularVestSystem_Heavy;
	class Modular_Pouch_Base_Heavy;
	class ModularChestRig_Base;
	class Modular_Belt_Base;
	class MVS_Sheath_Base;
	class MVS_Compact_Base;
	class MVS_Assault_Pack_Tan;
	class Modular_Pouch_Base_Taco;
	class MVS_Sling_Pack_Base;
	class MVS_Pack_Base;
	class MVS_Rucksack_Base;
	class MVS_BoonieHat;
	class MVS_FlatCap;
	class PlateCarrierHolster;
	class MVS_OpsCore_Base;
	class MVS_ArmoredHelmet_Base;
	class MVS_Helmet_Base;
	class MVS_Helmet_2_Base;
	class MVS_Radio_Pack_Tan;
	class Modular_Pouch_Base;
	class Modular_Pouch_Base_Admin;
	class Modular_Pouch_Base_Medical;
	class Modular_Pouch_Base_Utility;
	class MVS_Molle_Panel_Base;
	class MVS_Admin_Pouch;
	class MVS_Admin_Pouch_Desert_Digi: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Admin_Pouch_Multi_Desert: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Admin_Pouch_Desert: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Medical_Pouch_Desert_Digi: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Medical Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Medical_Pouch_Multicam_Desert: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Medical Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Medical_Pouch_Desert: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Magazine_Pouch_Desert_Digi: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "MVS Magazine Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Magazine_Pouch_Multicam_Desert: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Magazine Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Magazine_Pouch_Desert: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Magazine Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Utility_Pouch_Desert_Digi: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Utility Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Utility_Pouch_Multi_Desert: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Utility Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Utility_Pouch_Desert: MVS_Admin_Pouch
	{
		scope = 2;
		displayName = "MVS Utility Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Molle_Panel_Desert_Digi: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Molle_Panel_Multi_Desert: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Molle_Panel_Desert: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "MVS Admin Pouch - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_Belt_Desert_Digi: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_DesertDigi.paa","\MVS-Desert\data\Belt_co_DesertDigi.paa","\MVS-Desert\data\Belt_co_DesertDigi.paa"};
	};
	class MVS_Belt_Multicam_Desert: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_MC_Desert.paa","\MVS-Desert\data\Belt_co_MC_Desert.paa","\MVS-Desert\data\Belt_co_MC_Desert.paa"};
	};
	class MVS_Belt_Desert: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_Desert.paa","\MVS-Desert\data\Belt_co_Desert.paa","\MVS-Desert\data\Belt_co_Desert.paa","\MVS-Desert\data\Belt_co_Desert.paa"};
	};
	class MVS_BoonieHat_Desert_Digi: MVS_BoonieHat
	{
		scope = 2;
		displayName = "MVS Boonie - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_DesertDigi.paa","\MVS-Desert\data\MVS_BoonieHat_DesertDigi.paa","\MVS-Desert\data\MVS_BoonieHat_DesertDigi.paa"};
	};
	class MVS_BoonieHat_Multicam_Desert: MVS_BoonieHat
	{
		scope = 2;
		displayName = "MVS Boonie - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_MC_Desert.paa","\MVS-Desert\data\MVS_BoonieHat_MC_Desert.paa","\MVS-Desert\data\MVS_BoonieHat_MC_Desert.paa"};
	};
	class MVS_BoonieHat_Desert: MVS_BoonieHat
	{
		scope = 2;
		displayName = "MVS Boonie - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_Desert.paa","\MVS-Desert\data\MVS_BoonieHat_Desert.paa","\MVS-Desert\data\MVS_BoonieHat_Desert.paa"};
	};
	class MVS_Canteen_Desert_Digi: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_DesertDigi.paa","\MVS-Desert\data\canteen_co_DesertDigi.paa","\MVS-Desert\data\canteen_co_DesertDigi.paa"};
	};
	class MVS_Canteen_Multicam_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa","\MVS-Desert\data\canteen_co_Desert.paa","\MVS-Desert\data\canteen_co_Desert.paa"};
	};
	class MVS_Canteen_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa","\MVS-Desert\data\canteen_co_Desert.paa","\MVS-Desert\data\canteen_co_Desert.paa"};
	};
	class MVS_Cap_Desert_Digi: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_DesertDigi.paa","\MVS-Desert\data\MVS_Cap_co_DesertDigi.paa","\MVS-Desert\data\MVS_Cap_co_DesertDigi.paa"};
	};
	class MVS_Cap_Multicam_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_MC_Desert.paa","\MVS-Desert\data\MVS_Cap_co_MC_Desert.paa","\MVS-Desert\data\MVS_Cap_co_MC_Desert.paa"};
	};
	class MVS_Cap_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_Desert.paa","\MVS-Desert\data\MVS_Cap_co_Desert.paa","\MVS-Desert\data\MVS_Cap_co_Desert.paa"};
	};
	class MVS_FlatCap_Desert_Digi: MVS_FlatCap
	{
		scope = 2;
		displayName = "MVS Flat Cap - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_Desert.paa","\MVS-Desert\data\MVS_Cap_co_Desert.paa","\MVS-Desert\data\MVS_Cap_co_Desert.paa"};
	};
	class MVS_FlatCap_Multicam_Desert: MVS_FlatCap
	{
		scope = 2;
		displayName = "MVS Flat Cap - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_FlatCap_MC_Desert.paa","\MVS-Desert\data\MVS_FlatCap_MC_Desert.paa","\MVS-Desert\data\MVS_FlatCap_MC_Desert.paa"};
	};
	class MVS_FlatCap_Desert: MVS_FlatCap
	{
		scope = 2;
		displayName = "MVS Flat Cap - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_FlatCap_Desert.paa","\MVS-Desert\data\MVS_FlatCap_Desert.paa","\MVS-Desert\data\MVS_FlatCap_Desert.paa"};
	};
	class MVS_CombatShirt_Desert_Digi: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_DesertDigi.paa","\MVS-Desert\data\MVS_CombatShirt_DesertDigi.paa","\MVS-Desert\data\MVS_CombatShirt_DesertDigi.paa"};
	};
	class MVS_CombatShirt_Multicam_Desert: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_MC_Desert.paa","\MVS-Desert\data\MVS_CombatShirt_MC_Desert.paa","\MVS-Desert\data\MVS_CombatShirt_MC_Desert.paa"};
	};
	class MVS_CombatShirt_Desert: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_Desert.paa","\MVS-Desert\data\MVS_CombatShirt_Desert.paa","\MVS-Desert\data\MVS_CombatShirt_Desert.paa"};
	};
	class MVS_CombatPants_Desert_Digi: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_DesertDigi.paa","\MVS-Desert\data\MVS_CombatPants_DesertDigi.paa","\MVS-Desert\data\MVS_CombatPants_DesertDigi.paa"};
	};
	class MVS_CombatPants_Multicam_Desert: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_MC_Desert.paa","\MVS-Desert\data\MVS_CombatPants_MC_Desert.paa","\MVS-Desert\data\MVS_CombatPants_MC_Desert.paa"};
	};
	class MVS_CombatPants_Desert: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_Desert.paa","\MVS-Desert\data\MVS_CombatPants_Desert.paa","\MVS-Desert\data\MVS_CombatPants_Desert.paa"};
	};
	class MVS_Holster_Desert_Digi: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_DesertDigi.paa","\MVS-Desert\data\holster_co_DesertDigi.paa","\MVS-Desert\data\holster_co_DesertDigi.paa"};
	};
	class MVS_Holster_Multicam_Desert: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_MC_Desert.paa","\MVS-Desert\data\holster_co_MC_Desert.paa","\MVS-Desert\data\holster_co_MC_Desert.paa"};
	};
	class MVS_Holster_Desert: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert";
		heatIsolation = 0.0;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_Desert.paa","\MVS-Desert\data\holster_co_Desert.paa","\MVS-Desert\data\holster_co_Desert.paa"};
	};
	class MVS_Sheath_Desert_Digi: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_DesertDigi.paa","\MVS-Desert\data\sheath_co_DesertDigi.paa","\MVS-Desert\data\sheath_co_DesertDigi.paa"};
	};
	class MVS_Sheath_Multicam_Desert: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_MC_Desert.paa","\MVS-Desert\data\sheath_co_MC_Desert.paa","\MVS-Desert\data\sheath_co_MC_Desert.paa"};
	};
	class MVS_Sheath_Desert: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_Desert.paa","\MVS-Desert\data\sheath_co_Desert.paa","\MVS-Desert\data\sheath_co_Desert.paa"};
	};
	class MVS_Taco_Pouch_Desert_Digi: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_DesertDigi.paa","\MVS-Desert\data\taco_co_DesertDigi.paa","\MVS-Desert\data\taco_co_DesertDigi.paa"};
	};
	class MVS_Taco_Pouch_Multicam_Desert: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_MC_Desert.paa","\MVS-Desert\data\taco_co_MC_Desert.paa","\MVS-Desert\data\taco_co_MC_Desert.paa"};
	};
	class MVS_Taco_Pouch_Desert: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_Desert.paa","\MVS-Desert\data\taco_co_Desert.paa","\MVS-Desert\data\taco_co_Desert.paa"};
	};
	class MVS_Heavy_Pouch_Desert_Digi: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Digital Desert";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVSHeavy_co_DesertDigi.paa","\MVS-Desert\data\MVSHeavy_co_DesertDigi.paa","\MVS-Desert\data\MVSHeavy_co_DesertDigi.paa"};
	};
	class MVS_Heavy_Pouch_Multicam_Desert: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Multicam Desert";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVSHeavy_co_MC_Desert.paa","\MVS-Desert\data\MVSHeavy_co_MC_Desert.paa","\MVS-Desert\data\MVSHeavy_co_MC_Desert.paa"};
	};
	class MVS_Heavy_Pouch_Desert: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Desert";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVSHeavy_co_Desert.paa","\MVS-Desert\data\MVSHeavy_co_Desert.paa","\MVS-Desert\data\MVSHeavy_co_Desert.paa"};
	};
	class MVS_ArmoredHelmet_Desert_Digi: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "MVS Armored Helmet - Digital Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\Mandible_DesertDigi.paa","\ModularVestSystem\data\Helmets\MVS_Visor.paa"};
	};
	class MVS_ArmoredHelmet_Multicam_Desert: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "MVS Armored Helmet - Multicam Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\Mandible_MC_Desert.paa","\ModularVestSystem\data\Helmets\MVS_Visor.paa"};
	};
	class MVS_ArmoredHelmet_Desert: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "MVS Armored Helmet - Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\Mandible_Desert.paa","\ModularVestSystem\data\Helmets\MVS_Visor.paa"};
	};
	class MVS_Helmet_01_Desert_Digi: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "MVS Helmet - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_DesertDigi.paa","\MVS-Desert\data\do_helmets_co_DesertDigi.paa","\MVS-Desert\data\do_helmets_co_DesertDigi.paa","\ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"};
	};
	class MVS_Helmet_01_Multicam_Desert: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "MVS Helmet - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_MC_Desert.paa","\MVS-Desert\data\do_helmets_co_MC_Desert.paa","\MVS-Desert\data\do_helmets_co_MC_Desert.paa","\ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"};
	};
	class MVS_Helmet_01_Desert: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "MVS Helmet - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_Desert.paa","\MVS-Desert\data\do_helmets_co_Desert.paa","\MVS-Desert\data\do_helmets_co_Desert.paa","\ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"};
	};
	class MVS_WarriorHelmet_Desert_Digi: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Digital Desert";
		heatIsolation = 0.10;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\Mandalorian_Helmet_co_DesertDigi.paa","\ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"};
	};
	class MVS_WarriorHelmet_Multicam_Desert: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Multicam Desert";
		heatIsolation = 0.10;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\Mandalorian_Helmet_co_MC_Desert.paa","\ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"};
	};
	class MVS_WarriorHelmet_Desert: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert";
		heatIsolation = 0.10;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\Mandalorian_Helmet_co_Desert.paa","\ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"};
	};
	class MVS_Helmet_02_Desert_Digi: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_DesertDigi_co.paa","\MVS-Desert\data\MVS_Helmet_2_DesertDigi_co.paa","\MVS-Desert\data\MVS_Helmet_2_DesertDigi_co.paa"};
	};
	class MVS_Helmet_02_Multicam_Desert: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_MC_Desert_co.paa","\MVS-Desert\data\MVS_Helmet_2_MC_Desert_co.paa","\MVS-Desert\data\MVS_Helmet_2_MC_Desert_co.paa"};
	};
	class MVS_Helmet_02_Desert: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_Desert_co.paa","\MVS-Desert\data\MVS_Helmet_2_Desert_co.paa","\MVS-Desert\data\MVS_Helmet_2_Desert_co.paa"};
	};
	class MVS_OpsCore_Desert_Digi: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "MVS OpsCore - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa","\MVS-Desert\data\OpsCore_co_DesertDigi.paa"};
	};
	class MVS_OpsCore_Multicam_Desert: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "MVS OpsCore - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa","\MVS-Desert\data\OpsCore_co_MC_Desert.paa"};
	};
	class MVS_OpsCore_Desert: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "MVS OpsCore - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa","\MVS-Desert\data\OpsCore_co_Desert.paa"};
	};
	class MVS_Pack_Desert_Digi: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Combat Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\pack_co_DesertDigi.paa","\MVS-Desert\data\pack_co_DesertDigi.paa","\MVS-Desert\data\pack_co_DesertDigi.paa"};
	};
	class MVS_Pack_Multicam_Desert: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Combat Pack - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\pack_co_MC_Desert.paa","\MVS-Desert\data\pack_co_MC_Desert.paa","\MVS-Desert\data\pack_co_MC_Desert.paa"};
	};
	class MVS_Pack_Desert: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Combat Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\pack_co_Desert.paa","\MVS-Desert\data\pack_co_Desert.paa","\MVS-Desert\data\pack_co_Desert.paa"};
	};
	class MVS_Compact_1_Desert_Digi: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_DesertDigi.paa","\MVS-Desert\data\MVS_Compact_1_co_DesertDigi.paa","\MVS-Desert\data\MVS_Compact_1_co_DesertDigi.paa"};
	};
	class MVS_Compact_1_Multicam_Desert: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_MC_Desert.paa","\MVS-Desert\data\MVS_Compact_1_co_MC_Desert.paa","\MVS-Desert\data\MVS_Compact_1_co_MC_Desert.paa"};
	};
	class MVS_Compact_1_Desert: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_Desert.paa","\MVS-Desert\data\MVS_Compact_1_co_Desert.paa","\MVS-Desert\data\MVS_Compact_1_co_Desert.paa"};
	};
	class MVS_Radio_Pack_Desert_Digi: MVS_Radio_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Radio Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_DesertDigi.paa","\MVS-Desert\data\RadioPack_co_DesertDigi.paa","\MVS-Desert\data\RadioPack_co_DesertDigi.paa"};
	};
	class MVS_Radio_Pack_Multicam_Desert: MVS_Radio_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Radio Pack - Desert Radio Pack";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_MC_Desert.paa","\MVS-Desert\data\RadioPack_co_MC_Desert.paa","\MVS-Desert\data\RadioPack_co_MC_Desert.paa"};
	};
	class MVS_Rucksack_Desert_Digi: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "MVS Rucksack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Rucksack_co_DesertDigi.paa","\MVS-Desert\data\MVS_Rucksack_co_DesertDigi.paa","\MVS-Desert\data\MVS_Rucksack_co_DesertDigi.paa"};
	};
	class MVS_Rucksack_Multicam_Desert: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "MVS Rucksack - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Rucksack_co_MC_Desert.paa","\MVS-Desert\data\MVS_Rucksack_co_MC_Desert.paa","\MVS-Desert\data\MVS_Rucksack_co_MC_Desert.paa"};
	};
	class MVS_Rucksack_Desert: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "MVS Rucksack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Rucksack_co_Desert.paa","\MVS-Desert\data\MVS_Rucksack_co_Desert.paa","\MVS-Desert\data\MVS_Rucksack_co_Desert.paa"};
	};
	class MVS_Radio_Pack_Desert: MVS_Radio_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Radio Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_Desert.paa","\MVS-Desert\data\RadioPack_co_Desert.paa","\MVS-Desert\data\RadioPack_co_Desert.paa"};
	};
	class MVS_SlingPack_Desert_Digi: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_DesertDigi.paa","\MVS-Desert\data\MVS_Sling_co_DesertDigi.paa","\MVS-Desert\data\MVS_Sling_co_DesertDigi.paa"};
	};
	class MVS_SlingPack_Multicam_Desert: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_MC_Desert.paa","\MVS-Desert\data\MVS_Sling_co_MC_Desert.paa","\MVS-Desert\data\MVS_Sling_co_MC_Desert.paa"};
	};
	class MVS_SlingPack_Desert: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_Desert.paa","\MVS-Desert\data\MVS_Sling_co_Desert.paa","\MVS-Desert\data\MVS_Sling_co_Desert.paa"};
	};
	class MVS_Assault_Pack_Desert_Digi: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Raider Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RaidPack_DesertDigi_co.paa","\MVS-Desert\data\RaidPack_DesertDigi_co.paa","\MVS-Desert\data\RaidPack_DesertDigi_co.paa"};
	};
	class MVS_Assault_Pack_Multicam_Desert: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Raider Pack - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RaidPack_MC_Desert_co.paa","\MVS-Desert\data\RaidPack_MC_Desert_co.paa","\MVS-Desert\data\RaidPack_MC_Desert_co.paa"};
	};
	class MVS_Assault_Pack_Desert: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "MVS Raider Pack - Digital Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RaidPack_Desert_co.paa","\MVS-Desert\data\RaidPack_Desert_co.paa","\MVS-Desert\data\RaidPack_Desert_co.paa"};
	};
	class MVS_Combat_Vest_Desert_Digi: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa","\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Combat_Vest_Multicam_Desert: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa","\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Combat_Vest_Desert: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa","\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_ChestRig_Desert_Digi: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Digital Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_DesertDigi.paa","\MVS-Desert\data\MVS_Chestrig_co_DesertDigi.paa","\MVS-Desert\data\MVS_Chestrig_co_DesertDigi.paa"};
	};
	class MVS_ChestRig_Multicam_Desert: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_MC_Desert.paa","\MVS-Desert\data\MVS_Chestrig_co_MC_Desert.paa","\MVS-Desert\data\MVS_Chestrig_co_MC_Desert.paa"};
	};
	class MVS_ChestRig_Desert: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_Desert.paa","\MVS-Desert\data\MVS_Chestrig_co_Desert.paa","\MVS-Desert\data\MVS_Chestrig_co_Desert.paa"};
	};
	class MVS_Combat_Vest_Heavy_Desert_Digi: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy - Digital Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_DesertDigi.paa","\MVS-Desert\data\VestHeavy_co_DesertDigi.paa","\MVS-Desert\data\VestHeavy_co_DesertDigi.paa"};
	};
	class MVS_Combat_Vest_Heavy_Multicam_Desert: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy - Multicam Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_MC_Desert.paa","\MVS-Desert\data\VestHeavy_co_MC_Desert.paa","\MVS-Desert\data\VestHeavy_co_MC_Desert.paa"};
	};
	class MVS_Combat_Vest_Heavy_Desert: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy - Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_Desert.paa","\MVS-Desert\data\VestHeavy_co_Desert.paa","\MVS-Desert\data\VestHeavy_co_Desert.paa"};
	};
};
