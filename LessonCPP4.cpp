// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include <cmath> // for sqrt() function
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()
#include <random> // for std::mt19937


namespace MyRandom
{
	// Initialize our mersenne twister with a random seed based on the clock (once at system startup)
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int getRandomNumber1(int min, int max)
{
	std::uniform_int_distribution die{ min, max }; // we can create a distribution in any function that needs it
	return die(MyRandom::mersenne); // and then generate a random number from our global generator
}
 
void displayGetRandomNumber()
{
	std::cout << getRandomNumber1(1, 6) << '\n';
	std::cout << getRandomNumber1(1, 10) << '\n';
	std::cout << getRandomNumber1(1, 20) << '\n';
}

int main()
{
	displayGetRandomNumber();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

