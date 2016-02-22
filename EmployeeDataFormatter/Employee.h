#pragma once
#include "daytime.h"

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
private:
	char* first_name_;
	char* surname_;
	int personnel_id_;
	int national_id_;
	daytime entrance_time_;
	daytime exit_time_;

public:
	employee();
	employee(char*, char*, int, int);
	inline void set_entrance_time(daytime t);
	inline void set_exit_time(daytime t);
	void write_to_console();
};

employee read_employee_from_console();