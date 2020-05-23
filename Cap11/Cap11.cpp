#pragma once
#include<iostream>
#include"mytime.h"

void operator delete (void *t, Time& t1)
{
	t1.hours = 0, t1.minutes = 0;
	std::cout << "delete Time" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
	os << t.hours << " " << t.minutes << std::endl;
	return os;
}

int main()
{
	Time* t = new Time(12, 30);
	std::cout << *t;
	t->AddHour(15);
	std::cout << *t;
	t->AddMin(66);
	std::cout << *t;
	t->Reset(11, 11);
	std::cout << *t;
	*t = t->Sum(*t).Sum(*t);
	std::cout << *t;
	std::cout << *t + *t;
	operator delete(t, *t);
	std::cout << *t;
	delete t;
	
	return 0;
}