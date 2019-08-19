#pragma once
#include <cmath>

//a basic data container to be used for game elements such as HP and MP

class Pool
{
private:
	int current;
	int max;

public:

	Pool();
	Pool(int c, int m);

	int getCurrent();
	int getMax();

	void setCurrent(int num);
	void setMax(int num);

	void gain(int num);
	void lose(int num);

	bool isFull();
	bool isEmpty();
};