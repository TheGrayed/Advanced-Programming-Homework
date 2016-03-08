// EmployeeDataFormatter.cpp : main project file.

#include "stdafx.h"
#include "Employee.h"
#include "employee_comparer.h"
#include <iostream>
#include <string>
#include <iomanip>

#define EMPLOYEE_COUNT 2
#define TABLE_WIDTH 10

int main()
{
	employee employees[EMPLOYEE_COUNT];

	for (int i = 0; i < EMPLOYEE_COUNT; ++i)
	{
		std::cout << std::endl << "Input employee " << i << "'s data:" << std::endl;
		employees[i] = read_employee_from_console();
	}

	employee::sort(employees, compare_first_name, EMPLOYEE_COUNT, true);
	//employee::sort(employees, employee_comparer::compare_last_name, EMPLOYEE_COUNT, true);

	std::cout << std::endl << "Writing employee data sorted by first name ascending:" << std::endl;
	std::setfill(char(205));
	std::cout << char(201);
	for (int i = 0; i < EMPLOYEE_COMPONENT_COUNT - 1; ++i)
	{
		std::cout << std::setfill(char(205)) << std::setw(TABLE_WIDTH) << char(205);
		std::cout << char(203);
	}
	std::cout << std::setfill(char(205)) << std::setw(TABLE_WIDTH) << char(205);
	std::cout << char(187) << std::endl;
	for (int i = 0; i < EMPLOYEE_COUNT; ++i)
	{
		std::cout << char(186);
		employees[i].write_data_at_intervals_to_console(std::string() + char(186), TABLE_WIDTH);
		std::cout << char(186) << std::endl;
	}
	std::cout << char(200);
	for (int i = 0; i < EMPLOYEE_COMPONENT_COUNT - 1; ++i)
	{
		std::cout << std::setfill(char(205)) << std::setw(TABLE_WIDTH) << char(205);
		std::cout << char(202);
	}
	std::cout << std::setfill(char(205)) << std::setw(TABLE_WIDTH) << char(205);
	std::cout << char(188);

	std::cin.ignore();

	return 0;
}
