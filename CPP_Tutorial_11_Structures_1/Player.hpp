
#pragma once

#include <string>

struct Player
{
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;

	bool IsDead();
	void Attack(Player& other);
};