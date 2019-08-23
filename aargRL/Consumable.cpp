#include "Consumable.h"

void Consumable::setConsumableType(ConsumableType t)
{
	ctype = t;
}

Consumable::Consumable()
{

}


Consumable::~Consumable()
{

}

ConsumableType Consumable::getConsumableType()
{
	return ctype;
}
