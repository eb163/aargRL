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
