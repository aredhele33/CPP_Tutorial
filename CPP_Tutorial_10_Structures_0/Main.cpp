/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_10_Structure_0

#include <iostream>
#include <string>

// public
// protected
// private

struct Player
{
	std::string name;
	int hitPoints;
	int Damages;

	bool IsDead()
	{
		return hitPoints <= 0;
	}

	void Attack(Player& other);
};

void Player::Attack(Player& other)
{
	other.hitPoints -= Damages;
}

int main()
{
	Player player1;
	Player player2;
	Player player3;

	player1 = player2;

	player1.name = "Player1";
	player1.hitPoints = 5;

	std::cout << player1.name << std::endl;
	

	if (player1.IsDead())
	{
		std::cout << "The player 1 is dead." << std::endl;
	}

	player1.Damages   = 2;
	player2.hitPoints = 5;

	player1.Attack(player2);

	std::cout << player2.hitPoints << std::endl;

	std::cin.ignore();

	return 0;
}
