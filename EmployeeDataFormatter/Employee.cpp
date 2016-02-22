#include "stdafx.h"
#include "Employee.h"
#include <iostream>

employee::employee()
{
}

employee::employee(char* fname, char* sname, int pid, int nid)
{
	first_name_ = fname;
	surname_ = sname;
	personnel_id_ = pid;
	national_id_ = nid;
}

void employee::set_entrance_time(daytime t)
{
	entrance_time_ = t;
}

void employee::set_exit_time(daytime t)
{
	exit_time_ = t;
}

void employee::write_to_console()
{
	std::cout << FIRST_NAME_STRING << ": " << first_name_ << SUR_NAME_STRING << ": " << surname_ << NATIONAL_ID_STRING << ": " << national_id_ << PERSONNEL_ID_STRING << ": " << personnel_id_ << EXIT_TIME_STRING << ": ";
	entrance_time_.write_to_console_ampm();
	std::cout << EXIT_TIME_STRING << ": ";
	exit_time_.write_to_console_ampm();
}

employee read_employee_from_console()
{
	char* fname = new char[MAX_NAME_LENGTH];
	char* sname = new char[MAX_NAME_LENGTH];
	int pid, nid;
	daytime t1, t2;
	std::cout << std::endl << "Enter " << FIRST_NAME_STRING << ": ";
	std::cin >> fname;
	std::cout << std::endl << "Enter " << SUR_NAME_STRING << ": ";
	std::cin >> sname;
	std::cout << std::endl << "Enter " << NATIONAL_ID_STRING << ": ";
	std::cin >> nid;
	std::cout << std::endl << "Enter " << PERSONNEL_ID_STRING << ": ";
	std::cin >> pid;
	std::cout << std::endl << "Enter " << ENTRANCE_TIME_STRING << ": ";
	t1.read_from_console(false);
	std::cout << std::endl << "Enter " << EXIT_TIME_STRING << ": ";
	t2.read_from_console(false);

	employee e(fname, sname, pid, nid);
	e.set_entrance_time(t1);
	e.set_exit_time(t2);

	return e;
}
