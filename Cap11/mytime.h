#pragma once
#include<iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHour(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t) const;
	void Show() const;
	int GetHours();
	friend std::ostream & operator<<(std::ostream & os, const Time& t);
	friend void operator delete (void* t, Time& t1);
	operator int();

	Time operator+(const Time& t) const;
};

