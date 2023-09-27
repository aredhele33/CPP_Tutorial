/// \file    Player.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_14_Class_0
/// 
#include <iostream>

#include "Player.hpp"

Player::Player()
	: m_Name("")
	, m_HitPoints(0)
	, m_Damages(0)
{

}

Player::Player(const Player& player)
	: m_Name(player.m_Name)
	, m_HitPoints(player.m_HitPoints)
	, m_Damages(player.m_Damages)
{

}

Player::~Player()
{

}

Player::Player(const std::string& name, int hitPoints, int damages)
	: m_Name(name)
	, m_HitPoints(hitPoints)
	, m_Damages(damages)
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

const std::string& Player::GetName() const
{
	return m_Name;
}

int Player::GetHitPoints() const
{
	return m_HitPoints;
}

int Player::GetDamages() const
{
	return m_Damages;
}

void Player::SetDamages(int damages)
{
	m_Damages = damages;
}