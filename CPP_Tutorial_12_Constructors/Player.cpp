/// \file    Player.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_12_Constructors

#include "Player.hpp"

Player::Player()
: m_Name	 ("")
, m_HitPoints(0)
, m_Damages	 (0)
, m_Bonus	 (0)
{

}

Player::Player(const Player& player)
: m_Name	 (player.m_Name)
, m_HitPoints(player.m_HitPoints)
, m_Damages	 (player.m_Damages)
, m_Bonus	 (player.m_Bonus)
{

}

Player::Player(const std::string& name, int hitPoints, int damages, int bonus)
: m_Name	 (name)
, m_HitPoints(hitPoints)
, m_Damages  (damages)
, m_Bonus    (bonus)
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
