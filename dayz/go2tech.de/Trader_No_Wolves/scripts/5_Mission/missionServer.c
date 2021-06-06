modded class MissionServer
{
	float m_Trader_AnimalCleanupUpdateTimerMax = 30;
	float m_Trader_AnimalCleanupUpdateTimer = 0;

	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);

		m_Trader_AnimalCleanupUpdateTimer += timeslice;
		if (m_Trader_AnimalCleanupUpdateTimer >= m_Trader_AnimalCleanupUpdateTimerMax)
		{
			m_Trader_AnimalCleanupUpdateTimer = 0;

			for (int n = 0; n < m_Trader_TraderPositions.Count(); n++)
			{
				vector orientation = Vector(0, 0, 0);
				int safezoneDiameter = m_Trader_TraderSafezones.Get(n) * 2;
				vector edgeLength = Vector(safezoneDiameter, safezoneDiameter, safezoneDiameter);
				array<Object> excludedObjects = new array<Object>;
				array<Object> collidedObjects = new array<Object>;

				if (GetGame().IsBoxColliding(m_Trader_TraderPositions.Get(n), orientation, edgeLength, excludedObjects, collidedObjects))
				{
					for (int o = 0; o < collidedObjects.Count(); o++)
					{
						string objectClass = collidedObjects.Get(o).GetType();

						if (objectClass.Contains("Animal_CanisLupus"))
							GetGame().ObjectDelete(collidedObjects.Get(o));
					}
				}
			}
		}
	}
}