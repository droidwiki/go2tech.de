modded class BBP_BASE
{
	private ItemBase lastConstructedKit;

	override void OnPartBuiltServer( notnull Man player, string part_name, int action_id )
	{
		super.OnPartBuiltServer( player, part_name, action_id );
		ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );

		if ( constrution_part.IsBase() )
		{
			//spawn toolkit
			CreateConstructionKit_BBP();
		}

		//update visuals (server)
		UpdateVisuals();
	}

	override void OnPartDismantledServer( notnull Man player, string part_name, int action_id )
	{
		super.OnPartDismantledServer( player, part_name, action_id );
		if ( lastConstructedKit != NULL )
		{
			GetGame().ObjectDelete( lastConstructedKit );
		}
	}

	ItemBase CreateConstructionKit_BBP() {
		if ( lastConstructedKit == NULL ) {
			lastConstructedKit = super.CreateConstructionKit_BBP();
		}

		return lastConstructedKit;
	}
};
