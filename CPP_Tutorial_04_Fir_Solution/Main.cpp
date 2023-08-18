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

	// Premi�rement, on cr�� une boucle qui va it�rer N fois.
	// Chaque it�ration permettra d'afficher une ligne de nombre sapin.
	for (int n = 1; n <= firSize; ++n)
	{
		// Ensuite, on affiche les espaces blancs entre le bord de la console et la premi�re �toile.
		// Au d�but, n vaut 1, donc si vous aviez choisi une taille de sapin (firSize) de 5, on affichera 
		// 5 - n, soit 5 - 1, soit 4 espaces blancs, d�roulement : 
		// It�ration 0 : firSize - n, soit 5 - 1, soit 4 espaces blancs
		// It�ration 1 : firSize - n, soit 5 - 2, soit 3 espaces blancs
		// It�ration 2 : firSize - n, soit 5 - 3, soit 2 espaces blancs
		// It�ration 3 : firSize - n, soit 5 - 4, soit 1 espaces blancs
		// It�ration 4 : firSize - n, soit 5 - 5, soit 0 espaces blancs
		for (int i = 0; i < firSize - n; ++i)
		{
			// Pas de retour � la ligne !
			std::cout << " ";
		}

		// Ensuite, on affiche le sapin lui m�me.
		// Il suffit d'afficher un nombre croissant de caract�res, multiple de 2 (un caract�re en plus de chaque c�t�)
		for (int j = 0; j < n * 2; ++j)
		{
			std::cout << firCustomization;
		}

		std::cout << std::endl;
	}

	return 0;
}

