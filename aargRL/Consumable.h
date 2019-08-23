#pragma once
#include "Item.h"

enum ConsumableType {FOOD = 0, POTION = 1, SCROLL = 2};

class Consumable : public Item
{
private:
	ConsumableType ctype;

protected:
	void setConsumableType(ConsumableType t);

public:
	Consumable();
	~Consumable();

	ConsumableType getConsumableType();
};

