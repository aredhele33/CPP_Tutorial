/// \file    Main.cpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_06_Arrays

#include <iostream>

void ComputeTable(int table, int output[11])
{
	// Pour acc�der � un �l�ment du tableau :
	// nom[indice-�l�ment]
	// Note : Attention � ne pas acc�der � un �l�ment en dehors du tableau!
	//		  Vous encourez un crash ou une corruption de votre m�moire.
	for (int i = 0; i <= 10; ++i)
	{
		output[i] = i * table;
	}

	// output[0] = 0 * 5;
	// output[1] = 1 * 5;
	// output[2] = 2 * 5;
	// output[3] = 3 * 5;
	// ...
}

void DisplayTable(int output[11])
{
	for (int i = 0; i <= 10; ++i)
	{
		std::cout << output[i] << std::endl;
	}
}

float Average(float marks[5])
{
	float average = 0.0f;
	for (int i = 0; i < 5; ++i)
	{
		average += marks[i];
	}

	return average / 5.0f;
}

int main()
{
	// Pour d�clarer un tableau simple : 
	// type nom[nombre-�l�ments];

	// Il est aussi possible d'avoir plus d'une seule dimension :
	// type nom[nombre-�l�ments-dim-1][nombre-�l�ments-dim-2] etc.

	// Ici, nous d�clarons un tableau de 11 entiers de type int, tous initiais�s � 0.
	int table[11] = { 0 };

	ComputeTable(5, table);
	DisplayTable(table);

	// Ici, nous d�clarons un tableau de 5 r�els de type float, initilis�s aux valeurs sp�cifi�es.
	float marks[5] = { 10.5f, 18.0f, 14.0f, 8.0f, 16.0f };
	std::cout << "The average is : " << Average(marks) << std::endl;

	std::cin.ignore();
	
	return 0;
}
