#pragma once
#include <vector>
#include "Item.h"

using std::vector;

class Inventory
{
private:
	vector<Item> items;
	int itemLimit;

	int totalWeight;
	int weightLimit;

protected:

public:
	Inventory();
	~Inventory();

	void setItemLimit(int n);
	int getItemLimit();

	int getTotalItems();

	int getTotalWeight();

	void setWeightLimit(int w);
	int getWeightLimit();

	bool isFull();
	bool isEmpty();

	bool addItem(Item i);
	Item removeItem(int index);
};

