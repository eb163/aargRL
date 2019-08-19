#include "Agent.h"

Agent::Agent()
{
	name = "Abstract Agent";
	description = "An undefined abstract agent entity. You should not be seeing this description.";
	gdata = nullptr;
	coord = {0, 0};
}


Agent::~Agent()
{

}

void Agent::setType(AgentType t)
{
	type = t;
}

AgentType Agent::getType()
{
	return type;
}

void Agent::setName(string n)
{
	name = n;
}

string Agent::getName()
{
	return name;
}

void Agent::setDescr(string d)
{
	description = d;
}

string Agent::getDescr()
{
	return description;
}

Pair<int> Agent::getPosition()
{
	return coord;
}

void Agent::setPosition(int y, int x)
{
	coord.y = y;
	coord.x = x;
}

void Agent::move(int dy, int dx)
{
	coord.y += dy;
	coord.x += dx;
}

bool Agent::isAlive()
{
	return !(hp.isEmpty());
}
