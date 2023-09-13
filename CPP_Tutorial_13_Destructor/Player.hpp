/// \file    Player.hpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_13_Destructor

#pragma once

#include <string>

struct Player
{
	Player();
	Player(const Player& player);
	Player(const std::string& name, int hitPoints, int damages, int bonus);

	~Player();

	std::string m_Name;
	int m_HitPoints;
	int m_Damages;
	int m_Bonus;
	int* m_Data;

	bool IsDead();
	void Attack(Player& other);
};
