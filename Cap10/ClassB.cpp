#pragma once
#include"ClassB.h"
#include<iostream>

B::B(int flag)
{
	this->flag = flag;
	std::cout << "B constructed" << std::endl;
}

B::~B()
{
	std::cout << "B destructed" << std::endl;
}