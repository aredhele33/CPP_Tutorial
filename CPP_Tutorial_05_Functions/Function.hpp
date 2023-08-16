/// \file    Function.hpp
/// \author  Aredhele (@aredhele33)
/// \project CPP_Tutorial_05_Functions

// #pragma once est une directive préprocesseur pour dire qu'on souhaite que ce
// fichier soit inclu qu'une seule fois dans le programme.
#pragma once

// Syntaxe de la déclaration d'une fonction : 
// type-de-retour nom(paramètres...);

// Lecture : la fonction addition retourne un entier de type int et prend en paramètre deux entiers de type int, a et b.
int   addition(int a, int b);

// Lecture : la fonction addition retourne un réel de type float et prend en paramètre deux réels de type float, a et b.
// Note	   : Cette deuxième déclaration est ce qu'on appelle une surcharge de fonction. C'est à dire qu'on redéclare 
//			 une fonction avec le même nom mais avec des paramètres différents, une signature différente.
// Note	   : Attention! Pour les fonctions simples, le type de retour ne fait pas partie de la signature.
float addition(float a, float b);
