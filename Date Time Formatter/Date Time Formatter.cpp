// Date Time Formatter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

inline void printMillitaryTime(unsigned short hour, unsigned short minute, unsigned short seconds)
{
	std::cout << hour << ':' << minute << ':' << seconds << std::endl;
}

inline void printSplittedTime(unsigned short hour, unsigned short minute, unsigned short seconds)
{
	if (hour > 11)
	{
		std::cout << hour - 12 << ':' << minute << ':' << seconds << ' ' << "PM" << std::endl;
	}
	else
	{
		std::cout << hour << ':' << minute << ':' << seconds << ' ' << "AM" << std::endl;
	}
}

int main()
{
	unsigned short hour, minute, seconds;
	std::cin >> hour >> minute >> seconds;

	printMillitaryTime(hour, minute, seconds);
	printSplittedTime(hour, minute, seconds);

	std::cin.get();
	std::cin.get();

	return 0;
}