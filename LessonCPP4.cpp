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

namespace Random_Guess
{
    // Initialize our mersenne twister with a random seed based on the clock (once at system startup)
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int get_random_number(const int min, const int max)
{
    std::uniform_int_distribution die{ min, max }; // we can create a distribution in any function that needs it
    return die(Random_Guess::mersenne); // and then generate a random number from our global generator
}

int get_user_number_game(const int try_number)
{
    while (true)
    {
        std::cout << "Guess #" << try_number << ": ";
        int guess{};
        std::cin >> guess;
        // Check for failed extraction
        if (std::cin.fail()) // has previous extractoin failed?
        {
            // yep handel faillure
            std::cin.clear();// put back in normal operation mode
            std::cin.ignore(32767, '\n');// remove bad input
        }
        else
        {
            std::cin.ignore(32767, '\n');// remove any extaneous inputs; 
            // the user can't enter a meaningless int value, 
            // so we don't need to worry about validating that
            return guess;
        }
    }
}

int check_guess(const int guess, const int answer)
{
    if (guess == answer)
        return 0;
    else if (guess < answer)
        return 1;// lower
    else
        return 2;// heigher 
}

char play_again()
{
    while (true)
    {
        std::cout << "Would you like to play (y/n) or (n/N).";
        char play{};
        std::cin >> play;
        // Chars can accept any single input character,
        // so no need to check for an invalid extraction here
        std::cin.ignore(32767, '\n');// remove any extraneous inputs
        // Check whether the user entered meaningful input
        if (static_cast<int>(play) == 121 || static_cast<int>(play) == 89)//y or Y
        {
            return play;
        }
        else if (static_cast<int>(play) == 110 || static_cast<int>(play) == 78)//n or N
        {
            return play;
        }
    }
}

int game_loop()
{
    std::cout << "I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;

    const int get_answer{ get_random_number(1, 100) };
    //std::cout << get_answer << std::endl;

    for (int guess = 1; guess <= 7; guess++)
    {
        const int user_guess_loop{ get_user_number_game(guess) };
        if (!check_guess(get_answer, user_guess_loop))// if false 0 you win
        {
            std::cout << "You win the answer was " << get_answer << " with " 
                << guess << " guess." << std::endl;
            std::cout << "-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\n\n";
            return 1;
        }
        else if (check_guess(get_answer, user_guess_loop) == 1)// too high
        {
            std::cout << "Too high try again." << std::endl;
        }
        else if (check_guess(get_answer, user_guess_loop) == 2)// too low
        {
            std::cout << "Too low try again." << std::endl;
        }
        else
        {
            std::cout << "ERROR" << std::endl;
            break;
        }
    }
    std::cout << "Sorry, you lose.  The correct number was " << get_answer << std::endl;
    std::cout << "-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\n\n";
    return 0;
}

void play_game()
{
    int play{ static_cast<int>(play_again()) };
 
    do
    {
        if (static_cast<int>(play) == 110 || static_cast<int>(play) == 78)// n or N
        {
            break;
        }
        else if (play != 121 || play != 89)// not y or Y
        {
            game_loop();// play game loop
            play = static_cast<int>(play_again());// user breakes loop
        }
    } while (play == 121 || play == 89);
}

void test_func_game()
{
    char play{ play_again() };// get y, n or N, Y
    std::cout << play;
    std::cout << std::endl;

    int user_guess{ get_user_number_game(1) };// get guess pass guess made
    std::cout << user_guess;
    std::cout << std::endl;

    int answer{ get_random_number(1, 100) };
    std::cout << answer << std::endl;

    int check0{ check_guess(3, 3) };// same
    std::cout << check0;// should be 0
    std::cout << std::endl;

    int check1{ check_guess(5, 3) };// high
    std::cout << check1;// should be 2
    std::cout << std::endl;

    int check2{ check_guess(1, 3) };// low
    std::cout << check2;// should be 1
    std::cout << std::endl;

}

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

