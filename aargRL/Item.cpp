#include "Item.h"

Item::Item()
{
	name = "Abstract Item";
	description = "An undefined abstract item entity. You should not be seeing this description.";
	gdata = nullptr;
	coord = { 0, 0 };
}


Item::~Item()
{

}

void Item::setType(ItemType t)
{
	type = t;
}

ItemType Item::getType()
{
	return type;
}

void Item::setName(string n)
{
	name = n;
}

string Item::getName()
{
	return name;
}

void Item::setDescr(string d)
{
	description = d;
}

string Item::getDescr()
{
	return description;
}
