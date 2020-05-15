// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include <cmath> // for sqrt() function


void print_number_block()
{
    int count{ 1 };
    while (count <= 50)
    {
        if (count < 10)
            std::cout << "0" << count << ' ';
        else
            std::cout << count << ' ';

        if (count % 10 == 0)
            std::cout << '\n';
        ++count;
    }
}

void print_triangel_block()
{
    int outer{ 1 };
    while (outer < 10)
    {
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner++ << ' ';
        }
        std::cout << '\n';
        ++outer;
    }
}

int main()
{
    print_number_block();
    print_triangel_block();

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

