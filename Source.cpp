#include "pch.h"
#include <iostream>
#include "Header.h"
#include <typeinfo>

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



