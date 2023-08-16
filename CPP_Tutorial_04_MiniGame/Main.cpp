/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_04_MiniGame

#include <ctime>
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	int max_try = 0;
	std::cout << "Nombre d'essaies : ";
	std::cin >> max_try;
	std::cin.ignore();

	int mystery_number = std::rand() % 100;

	for (int i = 0; i < max_try; ++i)
	{
		std::cout << "Entrer un nomber entre 0 et 100 : ";

		int number = 0;
		std::cin >> number;
		std::cin.ignore();

		if (mystery_number == number)
		{
			std::cout << "Gagne" << std::endl;
			break;
		}
		else if (number > mystery_number)
		{
			std::cout << "Trop grand" << std::endl;
		}
		else
		{
			std::cout << "Trop petit" << std::endl;
		}

		if (i == max_try - 1)
		{
			std::cout << "Perdu !" << std::endl;
		}
	}

	std::cin.ignore();
	return 0;
}