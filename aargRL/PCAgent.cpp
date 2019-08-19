#include "PCAgent.h"

PCAgent::PCAgent()
{
	setType(AgentType::PC);
	setName("Player");
	setDescr("The daring hero of our story!");
	gdata = new GraphicData('@', COLOR_WHITE);
	coord.x = 0; coord.y = 0;

	hp.setMax(100); //placeholder arbitrary value
	hp.setCurrent(hp.getMax());

	mp.setMax(100); //placeholder arbitrary value
	mp.setCurrent(mp.getMax());

	stomach.setMax(1000); //placeholder arbitrary value
	stomach.setCurrent(stomach.getMax() / 2);
}

PCAgent::~PCAgent()
{

}
