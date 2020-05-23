#include<iostream>
#include "mytime.h"

Time::Time()
{
	this->hours = 0;
	this->minutes = 0;
}

Time::Time(int h, int m)
{
	this->hours = h;
	this->minutes = m;
}

void Time::AddMin(int m)
{
	this->minutes += m;
	this->hours += this->minutes / 60;
	this->minutes %= 60;
	this->hours %= 24;
}

void Time::AddHour(int h)
{
	this->hours += h;
	this->hours %= 24;
}

void Time::Reset(int h, int m)
{
	this->hours = h % 24;
	this->minutes = m % 60;
}

Time Time::Sum(const Time& t) const
{
	Time sum = Time();
	sum.minutes = (this->minutes + t.minutes) % 60;
	sum.hours = (this->hours + t.hours + (this->minutes + t.minutes) / 60) % 24;
	return sum;
}

void Time::Show() const
{
	std::cout << hours << ":" << minutes << " ";
}

Time Time::operator+(const Time& t) const
{
	Time sum = Time();
	sum.minutes = (this->minutes + t.minutes) % 60;
	sum.hours = (this->hours + t.hours + (this->minutes + t.minutes) / 60) % 24;
	return sum;
}

int Time::GetHours()
{
	return this->hours;
}

Time::operator int()
{
	return this->hours;
}