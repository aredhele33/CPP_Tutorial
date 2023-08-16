/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_07_Pointers

#include <iostream>

void Foo(int* a)
{
	if (a)
	{
		*a = 50;
	}
}

int main()
{
	int   a = 0;
	float b = 0;

	int*   p_int   = &a;
	float* p_float = &b;

	Foo(nullptr);

	std::cout << "Valeur de a = " << a << std::endl;
	std::cout << "Valeur de b = " << b << std::endl;

	std::cout << "Adresse de a = " << &a << std::endl;
	std::cout << "Adresse de b = " << &b << std::endl;

	std::cout << "Valeur de a = " << *p_int << std::endl;
	std::cout << "Valeur de b = " << *p_float << std::endl;

	std::cin.ignore();
	return 0;
}