/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_12_Constructors

#include <iostream>
#include <string>

#include "Player.hpp"

int main()
{
	Player player1("Player1", 5, 2, 1);
	Player player2("Player2", 5, 2, 1);
	Player player3("Player3", 5, 2, 1);

	std::cout << player1.m_Name << std::endl;

	if (player1.IsDead())
	{
		std::cout << "The player 1 is dead." << std::endl;
	}

	player1.Attack(player2);

	std::cout << player2.m_HitPoints << std::endl;

	std::cin.ignore();

	return 0;
}