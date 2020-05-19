#pragma once
#include"ClassA.h"
#include"ClassB.h"

int main()
{
	using namespace std;
	A* a = new A(1);
	A a1 = A(1);
	A a2(1);
	A a3 = { 1 };
	A a4{ 1 };
	B b(1);
	const A a5 = A(1);
	a5.pr();

	delete a;
	return 0;
}