/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_01_Conditions

#include <iostream>

int main()
{
	int  age = 8;
	bool with_parents = true;

	// En C++, une condition simple s'écrit :
	// if(expression-booléenne)
	// {
	//		...
	// }
	// else if(expression-booléenne) // optionnel
	// {
	//      ...
	// }
	// else // optionnel
	// {
	//		...
	// }
	// 
	// Une expression booléenne est une expression dont le résultat s'évalue à vrai ou faux

	// Lecture : 
	// SI		l'âge est supérieur ou égale à 16
	// OU SI	(avec parants ET âge supérieur ou égale à 10)

	// En C++ comme dans tous les langages, les opérateurs ont des priorités.
	// En théorie des langages / mathématiques, c'est ce qu'on appelle la priorité des opérations ou prédécence.
	// Voir : https://en.cppreference.com/w/cpp/language/operator_precedence
	if (age >= 16 || with_parents && age >= 10)
	{
		std::cout << "Allowed" << std::endl;
	}
	else
	{
		std::cout << "Non allowed" << std::endl;
	}

	std::cin.ignore();
	return 0;
}
