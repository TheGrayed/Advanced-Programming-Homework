#include "stdafx.h"
#include "Employee.h"
#include "employee_comparer.h"

short compare_last_name(employee e1, employee e2)
{
	if (e1.surname_ > e2.surname_)
		return 1;
	else if (e2.surname_ < e2.surname_)
		return -1;
	return 0;
}

short compare_first_name(employee e1, employee e2)
{
	if (e1.first_name_ > e2.first_name_)
		return 1;
	else if (e2.first_name_ < e2.first_name_)
		return -1;
	return 0;
}