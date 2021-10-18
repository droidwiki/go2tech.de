class CfgPatches
{
	class TraderBillboards
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_TraderBilldboards_Welcome: HouseNoDestruct
	{
		scope=2;
		model="\TraderBillboards\trader_welcome.p3d";
	};
};
