#include "Employee.h"

class employee_comparer
{
public:
	static short compare_first_name(employee, employee);
	static short compare_last_name(employee, employee);
	static void sort(employee*, short(*comparer)(employee, employee), int size, bool ascending);
};