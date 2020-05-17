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

double getDoubleCalculator()
{
	while (true)
	{
		std::cout << "Enter a double value: ";
		double value;
		std::cin >> value;
		// Check for failed extraction
		if (std::cin.fail()) // has previous extractoin failed?
		{
			// yep handel faillure
			std::cin.clear();// put back in normal operation mode
			std::cin.ignore(32767, '\n');// remove bad input
			std::cout << "No do it again a double is a number like 2.3 OK!\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');// remove any extaneous inputs; 
			// the user can't enter a meaningless double value, 
			// so we don't need to worry about validating that
			return value;
		}
	}
}

char getOperatorCalculator()
{
	while (true)
	{
		std::cout << "Enter one of the following: +, -, *, or /: ";
		char value;
		std::cin >> value;
		// Chars can accept any single input character,
		// so no need to check for an invalid extraction here
		std::cin.ignore(32767, '\n');// remove any extraneous inputs
		// Check whether the user entered meaningful input
		if (value == '+' || value == '-' || value == '*' || value == '/')
			return value;
		else
			std::cout << "No do it again +, -, *, or / OK!\n";
	}
}

void printResultsCalculator(double x, char op, double y)
{
	if (op == '+')
		std::cout << x << " + " << y << " is " << x + y << '\n';
	else if (op == '-')
		std::cout << x << " - " << y << " is " << x - y << '\n';
	else if (op == '*')
		std::cout << x << " * " << y << " is " << x * y << '\n';
	else if (op == '/')
		std::cout << x << " / " << y << " is " << x / y << '\n';
	else // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
		std::cout << "Something went wrong got an invalid operator.";
}

void runCalculator()
{
	double x{ getDoubleCalculator() };
	char op{ getOperatorCalculator() };
	double y{ getDoubleCalculator() };
	printResultsCalculator(x, op, y);
}


int main()
{
 
	runCalculator();

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

