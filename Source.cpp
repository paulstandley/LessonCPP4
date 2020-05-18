#include "pch.h"
#include <iostream>
#include "Header.h"
#include <typeinfo>
#include <cmath> // for sqrt() function
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()
#include <random> // for std::mt19937


int get_int()
{
	int value{};
	std::cin >> value;
	if (0 == (typeid(value) == typeid(int())))//type cheack
		return value;
	std::cout << "You did enter the incorrect type :-) " << '\n';
	return 48;// 0
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
		total = int_value1 + int_value2;// plus
	}
	break;
	case 45:
	{
		total = int_value1 - int_value2;// minus
	}
	break;
	case 42:
	{
		total = int_value1 * int_value2;// times
	}
	break;
	case 47:
	{
		total = int_value1 / int_value2;// divide
	}
	break;
	case 37:
	{
		total = int_value1 % int_value2;// mod
	}
	break;

	default:
	{
		total = 48;// 48 int is 0 char
		break;
	}
	}
	return total;
}

void run_calculate()
{
	std::cout << "Enter an int not 0: ";
	int user_int_1{ get_int() };

	std::cout << "Enter an operator: ";
	int user_char{ static_cast<int>(get_char()) };

	std::cout << "Enter another int not 0: ";
	int user_int_2{ get_int() };

	if (user_int_1 == 48)
	{
		std::cout << "Please enter an int not 0: ";
		user_int_1 = get_int();
	}

	if (user_int_2 == 48)
	{
		std::cout << "Please enter another int not 0: ";
		user_int_2 = get_int();
	}

	int calculate_value{ calculate(user_int_1, user_int_2, user_char) };

	if (calculate_value == 48)
	{
		user_char = get_char();
		calculate_value = calculate(user_int_1, user_int_2, user_char);
	}

	std::cout << user_int_1 << ' ' << static_cast<char>(user_char) << ' '
		<< user_int_2 << " = " << calculate_value << '\n';
}

/*
Define an enum class named Animal that contains the following animals:
pig, chicken, goat, cat, dog, ostrich.
Write a function named getAnimalName() that takes an Animal parameter
and uses a switch statement to return the name for that animal as a std::string.
Write another function named printNumberOfLegs() that uses a switch statement to print
the number of legs each animal walks on.
Make sure both functions have a default case that prints an error message.
Call printNumberOfLegs() from main() with a cat and a chicken.


enum class Animal
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	ostrich
};

std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
	case Animal::pig: return "Pig";
		break;
	case Animal::chicken: return "Chicken";
		break;
	case Animal::goat: return "Goat";
		break;
	case Animal::cat: return "Cat";
		break;
	case Animal::dog: return "Dog";
		break;
	case Animal::ostrich: return "Ostrich";
		break;
	default: return "Error";
		break;
	}
}

void printNumberOfLegs(std::string name, int number_legs)
{

	switch (number_legs)
	{
	case 2:
	{
		if (name == "Chicken")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		if (name == "Ostrich")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		break;
	case 4:
	{
		if (name == "Pig")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		if (name == "Goat")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		if (name == "Cat")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		if (name == "Dog")
			std::cout << "A " << name << " has " << number_legs << " legs." << '\n';
		break;
	}
	default: std::cout << "Error" << '\n';
		break;
	}
	}
}

int main()
{

	printNumberOfLegs("Cat", 4);
	printNumberOfLegs("Chicken", 2);

	return 0;
}

*/

void goto_function()
{
	double num;
tryAgain: // this is a stament number
	std::cout << "Enter a non-negative number ";
	std::cin >> num;

	if (num < 0.0)
		goto tryAgain;// goto stament

	std::cout << "The sqrt of " << num << " is " << sqrt(num) << std::endl;
}

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
	int outer{ 10 };
	while (outer <= 0)
	{
		int inner{ 1 };
		while (inner >= outer)
		{
			std::cout << --inner << ' ';
		}
		std::cout << '\n';
		--outer;
	}
}

void print_triangel_block1()
{
	// There are 5 rows, we can loop from 1 to 5
	int outer{ 1 };

	while (outer <= 5)
	{
		// Row elements appear in descending order, so start from 5 and loop through to 1
		int inner{ 5 };

		while (inner >= 1)
		{
			// The first number in any row is the same as the row number
			// So number should be printed only if it is <= the row number, space otherwise
			if (inner <= outer)
				std::cout << inner << ' ';
			else
				std::cout << "  "; // extra spaces purely for formatting purpose

			--inner;
		}

		// A row has been printed, move to the next row
		std::cout << '\n';

		++outer;
	}
}

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

unsigned int PRNG()
{
	// our initial starting seed is 5323
	static unsigned int seed{ 5323 };
	// Take the current seed and generate a new value from it
	// Due to our use of large constants and overflow, it would be
	// hard for someone to casually predict what the next number is
	// going to be from the previous one.
	seed = 8253729 * seed + 2396403;
	// Take the seed and return a value between 0 and 32767
	return seed % 32768;
}

void print_PRNG()
{
	// Print 100 random numbers
	for (int count{ 1 }; count <= 100; ++count)
	{
		std::cout << PRNG() << '\t';
		// If we've printed 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}
}

void random_cstlib()
{
	std::srand(5323);
	for (int count{ 1 }; count <= 100; ++count)
	{
		std::cout << std::rand() << '\t';
		// Print 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}
}

void randon_seed_time()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// set initial seed value to system clock
	for (int count{ 1 }; count <= 100; ++count)
	{
		std::cout << std::rand() << '\t';
		// If we've printed 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}
}

// Generate a random number between min and max (inclusive)
// Assumes std::srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
	// set initial seed value to system clock
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) };
	// static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

void printRandomNumber()
{
	for (int count{ 1 }; count <= 100; ++count)
	{
		std::cout << getRandomNumber(1, 19) << '\t';
		// If we've printed 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}
}

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

// gets initial height from user and returns it
double getInitialHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}

// Returns height from ground after "secondsPassed" seconds
double calculateHeight(double initialHeight, int secondsPassed)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen{ (myConstants::gravity * secondsPassed * secondsPassed) / 2.0 };
	double currentHeight{ initialHeight - distanceFallen };

	return currentHeight;
}

// Prints height every second till ball has reached the ground
void printHeight(double height, int secondsPassed)
{
	if (height > 0.0)
	{
		std::cout << "At " << secondsPassed << " seconds, the ball is at height:\t" << height <<
			" meters\n";
	}
	else
		std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
}


void runTowerFall()
{
	const double initialHeight{ getInitialHeight() };
	int seconds{ 0 };
	double height;
	do
	{
		height = calculateHeight(initialHeight, seconds);
		printHeight(height, seconds);
		++seconds;
	} while (height > 0.0);
}
