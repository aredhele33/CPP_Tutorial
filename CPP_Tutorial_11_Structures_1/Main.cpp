/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_11_Structure_2

#include <iostream>
#include <string>

#include "Player.hpp"

int main()
{
	Player player1;
	Player player2;
	Player player3;

	player1 = player2;

	player1.m_Name = "Player1";
	player1.m_HitPoints = 5;

	std::cout << player1.m_Name << std::endl;


	if (player1.IsDead())
	{
		std::cout << "The player 1 is dead." << std::endl;
	}

	player1.m_Damages = 2;
	player2.m_HitPoints = 5;

	player1.Attack(player2);

	std::cout << player2.m_HitPoints << std::endl;

	std::cin.ignore();

	return 0;
}