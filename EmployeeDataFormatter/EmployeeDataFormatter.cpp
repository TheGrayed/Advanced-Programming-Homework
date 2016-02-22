// EmployeeDataFormatter.cpp : main project file.

#include "stdafx.h"
#include "Employee.h"
#include <iostream>

#define EMPLOYEE_COUNT 1

int main()
{
	employee employees[EMPLOYEE_COUNT];

	for (int i = 0; i < EMPLOYEE_COUNT; ++i)
	{
		std::cout << std::endl << "Input employee " << i << "'s data:" << std::endl;
		employees[i] = read_employee_from_console();
	}

	for (int i = 0; i < EMPLOYEE_COUNT; ++i)
	{
		std::cout << std::endl << "Writing employee " << i << "'s data:" << std::endl;
		employees[i].write_to_console();
	}

	std::cin.ignore();
	std::cin.ignore();

    return 0;
}
