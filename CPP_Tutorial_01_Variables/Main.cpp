/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_01_Variables

// Inclure ce fichier permet d'acc�der notamment aux fonctions std::cout, std::cin etc.
#include <iostream>

int main()
{
	// Pour d�clarer une variable en C++, on utilise cette syntaxe :
	// type name;
	// 
	// Le C++ poss�de de nombreux types "fondamentaux", on peut citer par exemple : (dans les mod�les de donn�es r�cents)
	// - void
	// - char	=> Le type char est un nombre entier d'au moins 8 bits, g�n�ralement utilis� pour stocker des caract�res, mais pas seulement.
	// - short  => Le type short est un nombre entier d'au moins 16 bits.
	// - int	=> Le type int est un nombre entier de 32 bits. 
	// - float  => Le type float est un nombre r�el de 32 bits,  autrement nomm� "single precision".
	// - double => Le type double est un nombre r�el de 64 bits, autrement nomm� "double precision".
	// 
	// Exemples :
	// D�claration et assignation d'une variable de type char
	// char a = '0';

	// D�claration et assignation d'une variable de type int
	// int a = 42;

	// D�claration et assignation d'une variable de type float (.f pour diff�rencier float et double � la compilation)
	// float a = 2.8f;

	// D�claration et assignation d'une variable de type double
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