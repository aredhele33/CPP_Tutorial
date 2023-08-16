/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_01_Conditions

#include <iostream>

int main()
{
	int  age = 8;
	bool with_parents = true;

	// En C++, une condition simple s'�crit :
	// if(expression-bool�enne)
	// {
	//		...
	// }
	// else if(expression-bool�enne) // optionnel
	// {
	//      ...
	// }
	// else // optionnel
	// {
	//		...
	// }
	// 
	// Une expression bool�enne est une expression dont le r�sultat s'�value � vrai ou faux

	// Lecture : 
	// SI		l'�ge est sup�rieur ou �gale � 16
	// OU SI	(avec parants ET �ge sup�rieur ou �gale � 10)

	// En C++ comme dans tous les langages, les op�rateurs ont des priorit�s.
	// En th�orie des langages / math�matiques, c'est ce qu'on appelle la priorit� des op�rations ou pr�d�cence.
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
