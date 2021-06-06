class CfgPatches
{
	class BBPModifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={
			"BaseBuildingPlus"
		};
	};
};
class CfgMods
{
	class BBPModifications
	{
		dir="BBP_Modifications";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BBP_Modifications";
		credits="";
		author="Florian Schmidt";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BBP_Modifications/scripts/4_World"
				};
			};
		};
	};
};
