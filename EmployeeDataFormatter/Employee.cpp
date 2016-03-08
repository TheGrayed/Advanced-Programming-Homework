#include "stdafx.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include "utility.h"
#include <iomanip>

employee::employee()
{
}

employee::employee(std::string fname, std::string sname, std::string pid, std::string nid)
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
	write_to_console(": ", MAX_NAME_LENGTH);
}

void employee::write_to_console(std::string separator, int data_length)
{
	std::cout << FIRST_NAME_STRING << separator << first_name_ << SUR_NAME_STRING << separator << surname_ << NATIONAL_ID_STRING << separator << national_id_ << PERSONNEL_ID_STRING
		<< separator << personnel_id_ << EXIT_TIME_STRING << separator;
	entrance_time_.write_to_console_military(data_length);
	std::cout << EXIT_TIME_STRING << separator;
	exit_time_.write_to_console_military(data_length);
}

void employee::write_data_at_intervals_to_console(std::string separator, int data_length)
{
	std::cout << std::setfill(' ') << std::left << std::setw(data_length) << utility::shrink_string(first_name_, data_length)
		<< separator << std::setfill(' ') << std::left << std::setw(data_length) << utility::shrink_string(surname_, data_length)
		<< separator << std::setfill(' ') << std::left << std::setw(data_length) << utility::shrink_string(national_id_, data_length)
		<< separator << std::setfill(' ') << std::left << std::setw(data_length) << utility::shrink_string(personnel_id_, data_length)
		<< separator << std::setfill(' ') << std::left << std::setw(data_length);
	entrance_time_.write_to_console_military(data_length);
	std::setfill(' ');
	std::cout << separator << std::setw(data_length) << std::left;
	exit_time_.write_to_console_military(data_length);
}

employee read_employee_from_console()
{
	std::string fname, sname, pid, nid;

	daytime t1, t2;
	std::cout << std::endl << "Enter " << FIRST_NAME_STRING << ": ";
	std::getline(std::cin, fname);
	std::cout << std::endl << "Enter " << SUR_NAME_STRING << ": ";
	std::getline(std::cin, sname);
	std::cout << std::endl << "Enter " << NATIONAL_ID_STRING << ": ";
	std::getline(std::cin, nid);
	std::cout << std::endl << "Enter " << PERSONNEL_ID_STRING << ": ";
	std::getline(std::cin, pid);
	std::cout << std::endl << "Enter " << ENTRANCE_TIME_STRING << ": ";
	t1.read_from_console(false);
	std::cout << std::endl << "Enter " << EXIT_TIME_STRING << ": ";
	t2.read_from_console(false);

	employee e(fname, sname, pid, nid);
	e.set_entrance_time(t1);
	e.set_exit_time(t2);

	return e;
}