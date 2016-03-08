#include "stdafx.h"
#include "daytime.h"
#include <iostream>
#include <string>

daytime::daytime()
{
	h = 0;
	m = 0;
	s = 0;
}

daytime::daytime(unsigned short hours, unsigned short minutes, unsigned short seconds)
{
	from_components(hours, minutes, seconds);
}

void daytime::from_components(unsigned short hours, unsigned short minutes, unsigned short seconds)
{
	h = hours;
	m = minutes;
	s = seconds;
}

void daytime::read_from_console(bool ignore_constricts)
{
	read_component_from_console(HOUR_NAME, HOUR_COUNT, h, ignore_constricts);
	read_component_from_console(MINUTE_NAME, MINUTE_COUNT, m, ignore_constricts);
	read_component_from_console(SECOND_NAME, SECOND_COUNT, s, ignore_constricts);
	std::cin.ignore();
}

void daytime::read_component_from_console(const char* name, unsigned short exclusive_max, unsigned short &component, bool ignore_constrict)
{
	std::cout << "Please enter " << name << ':';
	std::cin >> component;
	while ((!ignore_constrict) && (component >= exclusive_max))
	{
		std::cout << "Invalid " << name << ". Please try again: ";
		std::cin >> component;
	}
	//std::cout << std::endl;
}

bool daytime::valid() { return h < HOUR_COUNT && m < MINUTE_COUNT && s < SECOND_COUNT; }

void daytime::force_validate()
{
	h %= HOUR_COUNT;
	m %= MINUTE_COUNT;
	s %= SECOND_COUNT;
}

void daytime::write_to_console_military(int length)
{
	std::string str;
	str.append(std::to_string(h));
	str.append(":");
	str.append(std::to_string(m));
	str.append(":");
	str.append(std::to_string(s));
	auto len = length > str.length() ? str.length() : length;
	std::cout << str.substr(0, len);
}

void daytime::write_to_console_ampm()
{
	if (h > 11)
		std::cout << h - 12 << ':' << m << ':' << s << " PM";
	else
		std::cout << h << ':' << m << ':' << s << " AM";
}

daytime::~daytime()
{
}
