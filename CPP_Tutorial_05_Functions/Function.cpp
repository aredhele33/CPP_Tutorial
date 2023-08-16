/// \file    Function.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_05_Functions
/// 
#include "Function.hpp"

// Si Function.hpp contenait les déclarations de nos deux fonctions,
//    Function.cpp contient les définitions.

// Note : Si vous utilisez des fonctions déclarées mais non définies
//		  votre programme va compiler mais l'éditeur de liens (linker)
//		  générera une erreur dans l'esprit : "unresolved reference / symbol" car
//		  il sera incapable de trouver le code associé à la fonction. 

int addition(int a, int b)
{
	return a + b;
}

float addition(float a, float b)
{
	return a + b;
}
