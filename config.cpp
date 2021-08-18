class CfgPatches
{
    class TakistanPlus_CamoPlus
	{
        units[]={};
        weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
        {
            "ModularVestSystem"
        };
    };
};
class CfgMods
{
	class TakistanPlus_CamoPlus
	{
		dir = "TakistanPlus_CamoPlus";
		extra = 0;
		type = "mod";
		name = "TakistanPlus_CamoPlus";
		tooltip = "TakistanPlus_CamoPlus";
		author = "RedFalcon&GumbyMN";
		authorID = "";
		version = "1.0.0";
		inputs = "TakistanPlus_CamoPlus/scripts/Inputs.xml";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"TakistanPlus_CamoPlus/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TakistanPlus_CamoPlus/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TakistanPlus_CamoPlus/scripts/5_Mission"};
			};
		};
	};
};
class CfgMagazines
{
    class PlateCarrierVest;
	class ModularVestSystem_Base: PlateCarrierVest
    {
        absorbency=0;
		heatIsolation=0.0;
    }
    class HighCapacityVest_ColorBase;
	class ModularVestSystem_Heavy: PlateCarrierVest
    {
        absorbency=0;
		heatIsolation=0.25;
    }
    class ModularChestRig_Base: HighCapacityVest_ColorBase
	{
        absorbency=0;
		heatIsolation=0.0;
    }
};