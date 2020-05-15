// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include <cmath> // for sqrt() function


void asc2()
{
    int num{ 97 };
    std::cout << "Program that prints out the letters a through z along with their ASCII " << '\n';
    std::cout << '\n';
    while (num <= 122)
    {
        std::cout << ' ' << static_cast<char>(num) << " ASC11 number is " << num << '\n';
        ++num;
    }
}



int main()
{
    //asc2();
    print_triangel_block1();

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

