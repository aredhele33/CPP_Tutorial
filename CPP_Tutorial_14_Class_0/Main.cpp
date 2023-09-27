/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_14_Class_0

#include <iostream>
#include <string>

#include "Player.hpp"

int main()
{
	Player player1("Player1", 5, 2);
	Player player2("Player2", 5, 2);
	Player player3("Player3", 5, 2);

	std::cout << player1.GetName() << std::endl;

	player1.SetDamages(10);

	if (player1.IsDead())
	{
		std::cout << "The player 1 is dead." << std::endl;
	}

	player1.Attack(player2);

	std::cout << player2.GetHitPoints() << std::endl;

	std::cin.ignore();

	return 0;
}