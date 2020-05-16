#include<iostream>

void func()
{
	std::cout << "call func" << std::endl;
}

int func1()
{
	std::cout << "call func1" << std::endl;
	return 0;
}

int main()
{
	using namespace std;
	int a = 0;
	const int* t = &a;
	int* const s = &a;
	const int* const p = &a;
	
	cout << a;
	
	
	return 0;
}