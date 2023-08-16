/// \file    Function.hpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_05_Functions

// #pragma once est une directive pr�processeur pour dire qu'on souhaite que ce
// fichier soit inclu qu'une seule fois dans le programme.
#pragma once

// Syntaxe de la d�claration d'une fonction : 
// type-de-retour nom(param�tres...);

// Lecture : la fonction addition retourne un entier de type int et prend en param�tre deux entiers de type int, a et b.
int   addition(int a, int b);

// Lecture : la fonction addition retourne un r�el de type float et prend en param�tre deux r�els de type float, a et b.
// Note	   : Cette deuxi�me d�claration est ce qu'on appelle une surcharge de fonction. C'est � dire qu'on red�clare 
//			 une fonction avec le m�me nom mais avec des param�tres diff�rents, une signature diff�rente.
// Note	   : Attention! Pour les fonctions simples, le type de retour ne fait pas partie de la signature.
float addition(float a, float b);
