/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_01_Variables

// Inclure ce fichier permet d'accéder notamment aux fonctions std::cout, std::cin etc.
#include <iostream>

int main()
{
	// Pour déclarer une variable en C++, on utilise cette syntaxe :
	// type name;
	// 
	// Le C++ possède de nombreux types "fondamentaux", on peut citer par exemple : (dans les modèles de données récents)
	// - void
	// - char	=> Le type char est un nombre entier d'au moins 8 bits, généralement utilisé pour stocker des caractères, mais pas seulement.
	// - short  => Le type short est un nombre entier d'au moins 16 bits.
	// - int	=> Le type int est un nombre entier de 32 bits. 
	// - float  => Le type float est un nombre réel de 32 bits,  autrement nommé "single precision".
	// - double => Le type double est un nombre réel de 64 bits, autrement nommé "double precision".
	// 
	// Exemples :
	// Déclaration et assignation d'une variable de type char
	// char a = '0';

	// Déclaration et assignation d'une variable de type int
	// int a = 42;

	// Déclaration et assignation d'une variable de type float (.f pour différencier float et double à la compilation)
	// float a = 2.8f;

	// Déclaration et assignation d'une variable de type double
	// double a = 8.0;

	// Assignation possible avec l'operator '='
	int age = 0;

	std::cout << "How old are you : ";
	std::cin >> age;
	std::cin.ignore();

	std::cout << "You are " << age << std::endl;
	std::cin.ignore();

	// Addition
	int a = 0;
	int b = 0;

	std::cout << "Enter a then b : ";
	std::cin >> a >> b;
	std::cin.ignore();

	// Arithmetique : + - * / %
	std::cout << "a + b = " << a + b << std::endl;
	std::cin.ignore();
	
	return 0;
}