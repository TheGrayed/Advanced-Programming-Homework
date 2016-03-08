#include "stdafx.h"
#include "utility.h"
#include <string>

std::string utility::shrink_string(std::string str, int length)
{
	int len = length > str.length() ? str.length() : length;
	return str.substr(0, len);
}
