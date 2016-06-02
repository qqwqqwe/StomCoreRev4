/*
ИЗИ BY R0M1NTIK
*/

class world_pvp : public PlayerScript
{
   public:
    world_pvp() : PlayerScript("world_pvp") { }

    void OnPVPKill(Player * killer, Player * victim)
    {
		if (victim->GetMapId() == 1 && victim->GetZoneId() == 616 && victim->GetAreaId() == 616)
	    {
			killer->AddItem(38186, 1);
		}
		else
        {
        return;
        }
    }
};

void AddSC_world_pvp()
{
	new world_pvp();
}