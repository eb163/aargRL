#include "Pool.h"

Pool::Pool()
{
	current = 0;
	max = 0;
}

Pool::Pool(int c, int m)
{
	current = c;
	max = m;
}

int Pool::getCurrent()
{
	return current;
}

int Pool::getMax()
{
	return max;
}

void Pool::setCurrent(int num)
{
	current = num;
}

void Pool::setMax(int num)
{
	max = num;
}

void Pool::gain(int num)
{
	num = abs(num);
	if (current + num < max)
	{
		current += num;
	}
	else
	{
		current = max;
	}
}

void Pool::lose(int num)
{
	num = abs(num);
	current -= num;
}

bool Pool::isFull()
{
	return (current >= max);
}

bool Pool::isEmpty()
{
	return (current <= 0);
}
