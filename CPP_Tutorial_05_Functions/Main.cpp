/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_05_Functions

#include <iostream>

// Pour accèder à la déclaration de nos fonctions, nous avons besoin d'inclure Function.hpp
#include "Function.hpp"

int main()
{
	std::cout << addition(5, 10) << std::endl;
	std::cout << addition(5.5f, 10.0f) << std::endl;
	std::cin.ignore();

	return 0;
}
