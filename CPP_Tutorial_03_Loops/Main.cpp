/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_03_Loops

#include <iostream>

int main()
{
	// Foor loop (Pour...)
	int table = 6;

	// Syntaxe : for(déclaration-ou-expression ﻿(optionel) ; condition ﻿(optionel) ; expression ﻿(optionel))
	// Note    : La boucle continuera tant que sa condition est vérfiée comme vraie.
	// Note	   : Il est possible d'écrire for(;;), ce qui sera une boucle infinie si il n'y a pas de break ou de return dans la fonction.
	// Lecture : Pour i allant de 0 à 10
	for (int i = 0; i <= 10; ++i)
	{
		std::cout << i << " x " << table << " = " << i * table << std::endl;
	}

	// Syntaxe : while(expression-booléene)
	// Note    : La boucle continuera tant que sa condition est vérfiée comme vraie.
	// Lecture : Tant que(vrai) 
	while (true)
	{
		int n = 0;
		std::cin >> n;
		std::cin.ignore();

		if (n == 0)
		{ 
			// Le mot clé "continue" permet revenir au début de la boucle actuelle,
			// sans exécuter le code en dessous.
			std::cout << "Skipping" << std::endl;
			continue;
		}

		if (n == 10)
		{
			// Le mot clé "break" permet de sortir de la boucle actuelle.
			std::cout << "Exiting" << std::endl;
			break;
		}

		std::cout << "Iteration" << std::endl;
	}

	std::cin.ignore();
	return 0;
}
