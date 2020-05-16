#include "pch.h"
#include <iostream>
#include "Header.h"
#include <typeinfo>
#include <cmath> // for sqrt() function
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()


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


