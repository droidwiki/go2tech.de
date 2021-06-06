class CfgPatches
{
	class TraderNoWolves
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class TraderNoWolves
	{
		dir="Trader_No_Wolves";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Trader_No_Wolves";
		credits="";
		author="Florian Schmidt";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Trader_No_Wolves/scripts/5_Mission"
				};
			};
		};
	};
};
