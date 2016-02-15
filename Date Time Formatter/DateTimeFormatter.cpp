// Date Time Formatter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "daytime.h"

int main()
{
	daytime t;
	t.read_from_console(false);
	std::cout << std::endl << "Military format: ";
	t.write_to_console_military();
	std::cout << std::endl << "AM-PM format: ";
	t.write_to_console_ampm();
	std::cout << std::endl;

	std::cin.ignore();
	std::cin.ignore();

	return 0;
}