class CfgPatches
{
	class DisableShoeGloveDamage
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class DisableShoeGloveDamage
	{
		dir="Disable_Shoe_Glove_Damage";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Disable_Shoe_Glove_Damage";
		credits="";
		author="Florian Schmidt";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Disable_Shoe_Glove_Damage/scripts/3_Game"
				};
			};
		};
	};
};
