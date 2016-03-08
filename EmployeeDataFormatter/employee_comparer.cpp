#include "stdafx.h"
#include "Employee.h"
#include "employee_comparer.h"

void employee_comparer::sort(employee* employees, short(*comparer)(employee, employee), int length, bool ascending)
{
	const short criteria = ascending ? 1 : -1;

	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			short comparison = (*comparer)(employees[j], employees[j + 1]);
			if (comparison == criteria)
				std::swap<employee>(employees[j], employees[j + 1]);
		}

	}
}

short employee_comparer::compare_last_name(employee e1, employee e2)
{
	if (e1.surname_ > e2.surname_)
		return 1;
	else if (e2.surname_ < e2.surname_)
		return -1;
	return 0;
}

short employee_comparer::compare_first_name(employee e1, employee e2)
{
	if (e1.first_name_ > e2.first_name_)
		return 1;
	else if (e2.first_name_ < e2.first_name_)
		return -1;
	return 0;
}