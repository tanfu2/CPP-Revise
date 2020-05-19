#pragma once
#include"ClassA.h"
#include<iostream>

A::A(int flag)
{
	this->flag = flag;
	std::cout << "A constructed" << std::endl;
}

A::~A()
{
	std::cout << "A destructed" << std::endl;
}

void A::pr() const
{
	std::cout << "prprprprpr" << std::endl;
}