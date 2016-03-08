#pragma once
#include "daytime.h"
#include <string>
#include <iomanip>

#define EMPLOYEE_COMPONENT_COUNT 6
#define MAX_NAME_LENGTH 16 //null included
#define FIRST_NAME_STRING "first name"
#define SUR_NAME_STRING "sur name"
#define PERSONNEL_ID_STRING "personnel id"
#define NATIONAL_ID_STRING "national id"
#define ENTRANCE_TIME_STRING "entrance time"
#define EXIT_TIME_STRING "exit time"

class employee
{
	friend employee read_employee_from_console();
	friend short compare_first_name(employee, employee);
	friend short compare_last_name(employee, employee);

private:
	std::string first_name_;
	std::string surname_;
	std::string personnel_id_;
	std::string national_id_;
	daytime entrance_time_;
	daytime exit_time_;

public:
	employee();
	employee(std::string, std::string, std::string, std::string);
	inline void set_entrance_time(daytime t);
	inline void set_exit_time(daytime t);
	void write_to_console();
	void write_to_console(std::string separator, int column_space);
	void write_data_at_intervals_to_console(std::string separator, int column_space);
	static void sort(employee*, short(*comparer)(employee, employee), int size, bool ascending);
};

employee read_employee_from_console();
void print_employee_array_to_console();