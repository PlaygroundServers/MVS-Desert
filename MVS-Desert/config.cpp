class CfgPatches
{
    class MVS-Desert
	{
        units[]={};
        weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Characters_Vests","DZ_Characters_Backpacks","DZ_Scripts","DZ_Characters","DZ_Gear_Drinks","DZ_Gear_Medical","DZ_Gear_Containers","ModularVestSystem"};
    };
};
class CfgMods
{
	class MVS-Desert
	{
		dir = "MVS-Desert";
		extra = 0;
		type = "mod";
		name = "MVS-Desert";
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
	class MVS_Helmet_Base;
	class BoonieHat_Olive;
	class MVS_WarriorHelmet_Base;
	class MVS_CombatShirt_Base;
	class MVS_CombatPants_Base;
	class ModularChestRig_Base;
	class ModularVestSystem_Base;
	class PlateCarrierHolster;
	class Modular_Belt_Base;
	class MVS_Sheath_Base;
	class MVS_Compact_Base;
	class MVS_Pack_Base;
	class MVS_Rucksack_Base;
	class MVS_Molle_Panel_Base;
	class Modular_Pouch_Base_Utility;
	class Modular_Pouch_Base_Medical;
	class Modular_Pouch_Base_Taco;
	// Attachments, Belts, Hats, & Helmets
	class MVS_Belt_Desert_Digi: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_DesertDigi.paa"};
	}
	class MVS_Belt_Desert_Multicam: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_MC_Desert.paa"};
	}
	class MVS_Belt_Desert: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_Desert.paa"};
	}
	class MVS_Boonie_Desert_Digi: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_DesertDigi.paa"};
	}
	class MVS_Boonie_Desert_Multicam: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_MC_Desert.paa"};
	}
	class MVS_Boonie_Desert: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_Desert.paa"};
	}
	class MVS_Canteen_Desert_Digi: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_DesertDigi.paa"};
	}
		class MVS_Canteen_Multicam_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa"};
	}
	class MVS_Canteen_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa"};
	}
	class MVS_Cap_Desert_Digi: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_DesertDigi.paa"};
	}
	class MVS_Cap_Multicam_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_MC_Desert.paa"};
	}
	class MVS_Cap_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_Desert.paa"};
	}
	class MVS_CombatShirt_Desert_Digi: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_DesertDigi.paa"};
	}
	class MVS_CombatShirt_Desert_Multicam: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_MC_Desert.paa"};
	}
	class MVS_CombatShirt_Desert: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_Desert.paa"};
	}
	class MVS_CombatPants_Desert_Digi: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_DesertDigi.paa"};
	}
	class MVS_CombatPants_Desert_Multicam: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_MC_Desert.paa"};
	}
	class MVS_CombatPants_Desert: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_Desert.paa"};
	}
	class MVS_Holster_Desert_Digi: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_DesertDigi.paa"};
	}
	class MVS_Holster_Desert_Multicam: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_MC_Desert.paa"};
	}
	class MVS_Holster_Desert: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_Desert.paa"};
	}
	class MVS_Sheath_Desert_Digi: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_DesertDigi.paa"};
	}
	class MVS_Sheath_Desert_Multicam: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_MC_Desert.paa"};
	}
	class MVS_Sheath_Desert: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_Desert.paa"};
	}
	class MVS_Warrior_Desert_Digi: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_DesertDigi.paa"};
	}
	class MVS_Warrior_Desert_Multicam: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_MC_DesertDigi.paa"};
	}
	class MVS_Warrior_Desert_Digi: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_Desert.paa"};
	}

	// Vests
	class MVS_Combat_Vest_Desert_Digi: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa"};
	}
	class MVS_Combat_Vest_Desert_Multicam: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa"};
	}
	class MVS_Combat_Vest_Desert: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa"};
	}
	class MVS_ChestRig_Desert_Digi: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_DesertDigi.paa"};
	}
	class MVS_ChestRig_Desert_Multicam: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_MC_Desert.paa"};
	}
	class MVS_ChestRig_Desert_Digi: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_Desert.paa"};
	}
};