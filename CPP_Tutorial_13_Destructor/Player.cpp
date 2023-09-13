/// \file    Player.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_13_Destructor

#include <iostream>

#include "Player.hpp"

Player::Player()
	: m_Name("")
	, m_HitPoints(0)
	, m_Damages(0)
	, m_Bonus(0)
	, m_Data(nullptr)
{
	m_Data = new int();
}

Player::Player(const Player& player)
	: m_Name(player.m_Name)
	, m_HitPoints(player.m_HitPoints)
	, m_Damages(player.m_Damages)
	, m_Bonus(player.m_Bonus)
	, m_Data(nullptr)
{

}

Player::~Player()
{
	if (m_Data != nullptr)
	{
		delete m_Data;
	}
}

Player::Player(const std::string& name, int hitPoints, int damages, int bonus)
	: m_Name(name)
	, m_HitPoints(hitPoints)
	, m_Damages(damages)
	, m_Bonus(bonus)
	, m_Data(nullptr)
{

}

bool Player::IsDead()
{
	return m_HitPoints <= 0;
}

void Player::Attack(Player& other)
{
	other.m_HitPoints -= m_Damages;
}
