// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include <cmath> // for sqrt() function

void loop_continue()
{
    for (int count{ 0 }; count < 20; ++count)
    {
        if ((count % 3) == 0 || (count % 5) == 0)
        {
            std::cout << " " << std::endl;
            continue;// If the number is not divisible by 3 or 5, skip this iteration
        }     
        std::cout << count << std::endl;
    }
}

int main()
{
    loop_continue();

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

