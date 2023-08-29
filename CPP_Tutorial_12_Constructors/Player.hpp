/// \file    Player.hpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_12_Constructors
/// 
#pragma once

#include <string>

struct Player
{
	Player();
	Player(const Player& player);
	Player(const std::string& name, int hitPoints, int damages, int bonus);

	std::string m_Name;
	int m_HitPoints;
	int m_Damages;
	int m_Bonus;

	bool IsDead();
	void Attack(Player& other);
};
