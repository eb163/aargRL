#include "Inventory.h"



Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}

void Inventory::setItemLimit(int n)
{
	itemLimit = n;
}

int Inventory::getItemLimit()
{
	return itemLimit;
}

int Inventory::getTotalItems()
{
	return items.size();
}

int Inventory::getTotalWeight()
{
	return totalWeight;
}

void Inventory::setWeightLimit(int w)
{
	weightLimit = w;
}

int Inventory::getWeightLimit()
{
	return weightLimit;
}

bool Inventory::isFull()
{
	return (getTotalItems() >=itemLimit);
}

bool Inventory::isEmpty()
{
	return getTotalItems() == 0;
}

bool Inventory::addItem(Item i)
{
	return false;
}

Item Inventory::removeItem(int index)
{
	return items.at(index);
}
