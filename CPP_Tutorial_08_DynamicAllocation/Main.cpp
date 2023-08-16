/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_08_DynamicAllocation

#include <iostream>

int main()
{
	int x = 10;
	int y = 10;

	int** grid = new int* [y];

	for (int i = 0; i < y; ++i)
	{
		grid[i] = new int[x];
	}

	for (int i = 0; i < y; ++i)
	{
		delete[] grid[i];
	}

	delete[] grid;

	return 0;
}
