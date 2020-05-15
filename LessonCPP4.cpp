// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include <cmath> // for sqrt() function

void print_for_loop()
{
    int up{};
    int down{};
    for (up = 1, down = 9; up < 10; ++up, --down)
            std::cout << "Up " << up << ' ' << " down " << down << '\n';

    for (int iii{ 0 }, jjj{ 9 }; iii < 10; ++iii, --jjj)
            std::cout << iii << ' ' << jjj << '\n';

    for (char c{ 'a' }; c <= 'e'; ++c) // outer loop on letters
    {
        std::cout << c; // print our letter first
        for (int i{ 0 }; i < 3; ++i) // inner loop on all numbers
            std::cout << i;
        std::cout << '\n';
    }
}

int main()
{
    print_for_loop();

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

