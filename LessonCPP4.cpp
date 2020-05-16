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


void mt19937_mersenne()
{
    // Initialize our mersenne twister with a random seed based on the clock
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    // Create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die{ 1, 6 };
    // Print a bunch of random numbers
    for (int count{ 1 }; count <= 48; ++count)
    {
        std::cout << die(mersenne) << '\t'; // generate a roll of the die here
                // If we've printed 6 numbers, start a new row
        if (count % 6 == 0)
            std::cout << '\n';
    }
}



int main()
{
    mt19937_mersenne();

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

