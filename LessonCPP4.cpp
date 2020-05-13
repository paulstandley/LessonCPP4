// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>

/*
Write a function called calculate() that takes two integers and a char representing one 
of the following mathematical operations: +, -, *, /, or % (modulus). 
Use a switch statement to perform the appropriate mathematical operation on the integers,
and return the result. 
If an invalid operator is passed into the function, the function should print an error. 
For the division operator, do an integer division.
*/

int get_int()
{
	int value{};
	std::cin >> value;
	return value;
}

char get_char()
{
	char user_char{};
	std::cin >> user_char;
	return user_char;
}

int calculate(int int_value1, int int_value2, int char_value)
{
	int total{ 0 };
	switch (char_value)
	{
	case 43:
	{
		total = int_value1 + int_value2;
	}// plus
	break;
	case 47:
	{
		total = int_value1 - int_value2;
	}// minus
	break;
	case 42: 
	{
		total = int_value1 * int_value2;
	}// times
		break;
	case 50: 
	{
		total = int_value1 / int_value2;
	}// divide
		break;
	case 37:
	{
		total = int_value1 % int_value2;
	}// mod
		break;

	default: 
	{
		total = 48;
		break;
	}// 48 int is 0 char
	}
    return total;
}


int main()
{
	int user_int_1{};
	int user_char{};
	int user_int_2{};
	int calculate_value{};
	bool while_true{ true };
	
	while (while_true)
	{
		std::cout << "Enter int: ";
		user_int_1 = get_int() ;

		std::cout << "Enter an operator: ";
		user_char = static_cast<int>(get_char());

		std::cout << "Enter another int: ";
		user_int_2 = get_int();

		calculate_value = calculate(user_int_1, user_int_2, user_char);

		// test char
		if (calculate_value == 48)
		{
			std::cout << "You did int enter the incorrect type :-) " << '\n';
			while_true = true;
			user_char = 0; // NUL
			user_int_1 = 0; // NUL
			user_int_2 = 0; // NUL
		}
		else
		{
			std::cout << user_int_1 << ' ' << static_cast<char>(user_char) << ' ' << user_int_2 << " = " << calculate_value <<'\n';
			while_true = false;
		}
	}


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
