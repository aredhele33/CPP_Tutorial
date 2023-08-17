#include "Player.hpp"

bool Player::IsDead()
{
	return m_HitPoints <= 0;
}

void Player::Attack(Player& other)
{
	other.m_HitPoints -= m_Damages;
}
