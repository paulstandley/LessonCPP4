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

/*
Implement a game of hi-lo. First, your program should pick a random integer between 1 and 100.
The user is given 7 tries to guess the number.
If the user does not guess the correct number,
the program should tell them whether they guessed too high or too low. 
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost, 
and what the correct number is. At the end of the game, 
the user should be asked if they want to play again.
If the user doesn’t enter ‘y’ or ‘n’, ask them again.
*/



int main()
{
 
    play_game();
    

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

