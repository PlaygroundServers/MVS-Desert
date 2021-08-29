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
	class MVS_Helmet_Base;
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
	class Modular_Pouch_Base_Taco;
	class MVS_Sling_Pack_Base;
	class MVS_Pack_Base;
	class BoonieHat_Olive;
	class FlatCap_Black;
	class BalaclavaMask_ColorBase;
	class PlateCarrierHolster;
	class MVS_Belt_Desert_Digi: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_DesertDigi.paa"};
	};
	class MVS_Belt_Desert_Multicam: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_MC_Desert.paa"};
	};
	class MVS_Belt_Desert: Modular_Belt_Base
	{
		scope = 2;
		displayName = "MVS Belt - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Belt_co_Desert.paa"};
	};
	class MVS_Boonie_Desert_Digi: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_DesertDigi.paa"};
	};
	class MVS_Boonie_Desert_Multicam: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_MC_Desert.paa"};
	};
	class MVS_Boonie_Desert: BoonieHat_Olive
	{
		scope = 2;
		displayName = "MVS Boonie - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_BoonieHat_Desert.paa"};
	};
	class MVS_Canteen_Desert_Digi: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_DesertDigi.paa"};
	};
	class MVS_Canteen_Multicam_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Multicam Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa"};
	};
	class MVS_Canteen_Desert: MVS_Canteen_Base
	{
		scope = 2;
		displayName = "MVS Canteen - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\canteen_co_Desert.paa"};
	};
	class MVS_Cap_Desert_Digi: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_DesertDigi.paa"};
	};
	class MVS_Cap_Multicam_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Multicam Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_MC_Desert.paa"};
	};
	class MVS_Cap_Desert: MVS_Cap_Base
	{
		scope = 2;
		displayName = "MVS Cap - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Cap_co_Desert.paa"};
	};
	class MVS_FlatCap_Desert_Digi: FlatCap_Black
	{
		scope = 2;
		displayName = "MVS Flat Cap - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_FlatCap_DesertDigi.paa"};
	};
	class MVS_FlatCap_Desert_Multicam: FlatCap_Black
	{
		scope = 2;
		displayName = "MVS Flat Cap - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_FlatCap_MC_Desert.paa"};
	};
	class MVS_FlatCap_Desert: FlatCap_Black
	{
		scope = 2;
		displayName = "MVS Flat Cap - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_FlatCap_Desert.paa"};
	};
	class MVS_CombatShirt_Desert_Digi: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_DesertDigi.paa"};
	};
	class MVS_CombatShirt_Desert_Multicam: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_MC_Desert.paa"};
	};
	class MVS_CombatShirt_Desert: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "MVS Combat Shirt - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatShirt_Desert.paa"};
	};
	class MVS_CombatPants_Desert_Digi: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_DesertDigi.paa"};
	};
	class MVS_CombatPants_Desert_Multicam: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_MC_Desert.paa"};
	};
	class MVS_CombatPants_Desert: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "MVS Combat Pants - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_CombatPants_Desert.paa"};
	};
	class MVS_Comtacs_Desert: BalaclavaMask_ColorBase
	{
		scope = 2;
		displayName = "MVS Comtacs - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\OpsCoreComtacs_co.paa"};	
	};
	class MVS_Holster_Desert_Digi: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_DesertDigi.paa"};
	};
	class MVS_Holster_Desert_Multicam: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_MC_Desert.paa"};
	};
	class MVS_Holster_Desert: PlateCarrierHolster
	{
		scope = 2;
		displayName = "MVS Holster - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\holster_co_Desert.paa"};
	};
	class MVS_Sheath_Desert_Digi: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_DesertDigi.paa"};
	};
	class MVS_Sheath_Desert_Multicam: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_MC_Desert.paa"};
	};
	class MVS_Sheath_Desert: MVS_Sheath_Base
	{
		scope = 2;
		displayName = "MVS Sheath - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\sheath_co_Desert.paa"};
	};
	class MVS_Taco_Pouch_Desert_Digi: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_DesertDigi.paa"};
	};
	class MVS_Taco_Pouch_Desert_Multicam: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_MC_Desert.paa"};
	};
	class MVS_Taco_Pouch_Desert: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "MVS Taco Pouch - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\taco_co_Desert.paa"};
	};
	class MVS_Heavy_Pouch_Desert_Digi: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Desert Digital";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\WinterCamoForModularVestSystem\Data\Digisnow\MVSHeavy_co_DesertDigi.paa"};
	};
	class MVS_Heavy_Pouch_Desert_Multicam: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Desert Multicam";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\WinterCamoForModularVestSystem\Data\MVSHeavy_co_MC_Desert.paa"};
	};
	class MVS_Heavy_Pouch_Desert: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - Desert";
		heatIsolation = 0.8;
		hiddenSelectionsTextures[] = {"\WinterCamoForModularVestSystem\Data\MVSHeavy_co_Desert.paa"};
	};
	class MVS_Warrior_Desert_Digi: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_DesertDigi.paa"};
	};
	class MVS_Warrior_Desert_Multicam: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_MC_DesertDigi.paa"};
	};
	class MVS_Warrior_Desert: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\Mandalorian_Helmet_co_Desert.paa"};
	};
	class MVS_Helmet_2_Desert_Digi: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_DesertDigi_co.paa"};
	};
	class MVS_Helmet_2_Desert_Multicam: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_MC_Desert_co.paa"};
	};
	class MVS_Helmet_2_Desert: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS Helmet 2 - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Helmet_2_Desert_co.paa"};
	};
	class MVS_6B47Helmet_Desert_Digi: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS 6B47 - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_DesertDigi.paa"};
	};
	class MVS_6B47Helmet_Desert_Multicam: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS 6B47 - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_Desert.paa"};
	};
	class MVS_6B47Helmet_Desert: Mich2001Helmet
	{
		scope = 2;
		displayName = "MVS 6B47 - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\do_helmets_co_Desert.paa"};
	};
	class MVS_Compact_Pack_Desert_Digi: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_DesertDigi.paa"};
	};
	class MVS_Compact_Pack_Desert_Multicam: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_MC_Desert.paa"};
	};
	class MVS_Compact_Pack_Desert: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_1_co_Desert.paa"};
	};
	class MVS_Compact_Pack_Desert_Digi_2: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_2_co_DesertDigi.paa"};
	};
	class MVS_Compact_Pack_Desert_Multicam_2: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert Multicam";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_2_co_MC_Desert.paa"};
	};
	class MVS_Compact_Pack_Desert_2: MVS_Compact_Base
	{
		scope = 2;
		displayName = "MVS Compact Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Compact_2_co_Desert.paa"};
	};
	class MVS_Radio_Pack_Desert_Digi: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Radio Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_DesertDigi.paa"};
	};
	class MVS_Radio_Pack_Desert_Multicam: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Radio Pack - Desert Radio Pack";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_MC_Desert.paa"};
	};
	class MVS_Radio_Pack_Desert: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Radio Pack - Desert";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\RadioPack_co_Desert.paa"};
	};
	class MVS_SlingPack_Desert_Digi: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_DesertDigi.paa"};
	};
	class MVS_SlingPack_Desert_Digi: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_MC_Desert.paa"};
	};
	class MVS_SlingPack_Desert_Digi: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "MVS Sling Pack - Desert Digital";
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Sling_co_Desert.paa"};
	};
	class MVS_Combat_Vest_Desert_Digi: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_DesertDigi.paa"};
	};
	class MVS_Combat_Vest_Desert_Multicam: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_MC_Desert.paa"};
	};
	class MVS_Combat_Vest_Desert: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "MVS Combat Vest - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\vest_co_Desert.paa"};
	};
	class MVS_ChestRig_Desert_Digi: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert Digital";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_DesertDigi.paa"};
	};
	class MVS_ChestRig_Desert_Multicam: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert Multicam";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_MC_Desert.paa"};
	};
	class MVS_ChestRig_Desert_Digi: ModularChestRig_Base
	{
		scope = 2;
		displayName = "MVS ChestRig - Desert";
		heatIsolation = 0.0;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\MVS_Chestrig_co_Desert.paa"};
	};
	class ModularVestSystem_Heavy_Desert_Digi: PlateCarrierVest
	{
		scope = 2;
		displayName = "MVS Heavy - Desert Digital";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_DesertDigi.paa"};
	};
	class ModularVestSystem_Heavy_Desert_Multicam: PlateCarrierVest
	{
		scope = 2;
		displayName = "MVS Heavy - Desert Multicam";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_MC_Desert.paa"};
	};
	class ModularVestSystem_Heavy_Desert: PlateCarrierVest
	{
		scope = 2;
		displayName = "MVS Heavy - Desert";
		heatIsolation = 0.25;
		hiddenSelectionsTextures[] = {"\MVS-Desert\data\VestHeavy_co_Desert.paa"};
	};
};