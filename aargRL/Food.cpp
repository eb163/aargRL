#include "Food.h"

Food::Food()
{
	setItemType(ItemType::CONSUMABLE);
	setConsumableType(ConsumableType::FOOD);
	setGraphicData('%', COLOR_YELLOW);
}

Food::~Food()
{
}
