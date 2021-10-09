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
			CreateConstructionKit();
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

	ItemBase CreateConstructionKit() {
		lastConstructedKit = super.CreateConstructionKit();

		return lastConstructedKit;
	}
};
