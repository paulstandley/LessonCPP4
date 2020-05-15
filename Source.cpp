#include "pch.h"
#include <iostream>
#include "Header.h"
#include <typeinfo>
#include <cmath> // for sqrt() function


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

