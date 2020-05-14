// LessonCPP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>


/*
Define an enum class named Animal that contains the following animals: 
pig, chicken, goat, cat, dog, ostrich. 
Write a function named getAnimalName() that takes an Animal parameter
and uses a switch statement to return the name for that animal as a std::string.
Write another function named printNumberOfLegs() that uses a switch statement to print
the number of legs each animal walks on.
Make sure both functions have a default case that prints an error message. 
Call printNumberOfLegs() from main() with a cat and a chicken.
*/

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
