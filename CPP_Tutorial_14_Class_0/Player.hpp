/// \file    Player.hpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_14_Class_0

#pragma once

#include <string>

class Player
{
	// public
	// protected
	// private

public:
	Player();
	Player(const Player& player);
	Player(const std::string& name, int hitPoints, int damages);

	~Player();

	bool IsDead();
	void Attack(Player& other);

	const std::string& GetName() const;
	int GetHitPoints() const;
	int GetDamages() const;

	void SetDamages(int damages);

private:
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;
};
