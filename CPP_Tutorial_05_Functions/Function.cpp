/// \file    Function.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_05_Functions
/// 
#include "Function.hpp"

// Si Function.hpp contenait les d�clarations de nos deux fonctions,
//    Function.cpp contient les d�finitions.

// Note : Si vous utilisez des fonctions d�clar�es mais non d�finies
//		  votre programme va compiler mais l'�diteur de liens (linker)
//		  g�n�rera une erreur dans l'esprit : "unresolved reference / symbol" car
//		  il sera incapable de trouver le code associ� � la fonction. 

int addition(int a, int b)
{
	return a + b;
}

float addition(float a, float b)
{
	return a + b;
}
