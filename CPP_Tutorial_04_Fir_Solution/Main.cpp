/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_04_Fir_Solution

#include <iostream>

int main(int argc, char** argv)
{
	unsigned	   firSize			= 0;
	const char	   firCustomization = '*';
	const unsigned firMinSize		= 5;
	const unsigned firMaxSize		= 25;

	std::cout << "Please enter the fir size in range [" << firMinSize << ", " << firMaxSize << "] : ";
	std::cin  >> firSize;

	if (firSize < firMinSize || firSize > firMaxSize)
	{
		std::cerr << "The size must be in range [" << firMinSize << ", " << firMaxSize << "]." << std::endl;
		std::cerr << "Exiting." << std::endl;
		return -1;
	}

	std::cout << std::endl;

	// Premièrement, on créé une boucle qui va itérer N fois.
	// Chaque itération permettra d'afficher une ligne de nombre sapin.
	for (int n = 1; n <= firSize; ++n)
	{
		// Ensuite, on affiche les espaces blancs entre le bord de la console et la première étoile.
		// Au début, n vaut 1, donc si vous aviez choisi une taille de sapin (firSize) de 5, on affichera 
		// 5 - n, soit 5 - 1, soit 4 espaces blancs, déroulement : 
		// Itération 0 : firSize - n, soit 5 - 1, soit 4 espaces blancs
		// Itération 1 : firSize - n, soit 5 - 2, soit 3 espaces blancs
		// Itération 2 : firSize - n, soit 5 - 3, soit 2 espaces blancs
		// Itération 3 : firSize - n, soit 5 - 4, soit 1 espaces blancs
		// Itération 4 : firSize - n, soit 5 - 5, soit 0 espaces blancs
		for (int i = 0; i < firSize - n; ++i)
		{
			// Pas de retour à la ligne !
			std::cout << " ";
		}

		// Ensuite, on affiche le sapin lui même.
		// Il suffit d'afficher un nombre croissant de caractères, multiple de 2 (un caractère en plus de chaque côté)
		for (int j = 0; j < n * 2; ++j)
		{
			std::cout << firCustomization;
		}

		std::cout << std::endl;
	}

	return 0;
}

