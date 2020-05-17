#include<iostream>
#include<array>

void func()
{
	std::cout << "call func" << std::endl;
}

int* func1()
{
	std::cout << "call func1" << std::endl;
	return nullptr;
}

int main()
{
	using namespace std;
	int a = 0;
	const int* t = &a;
	int* const s = &a;
	const int* const p = &a;

	void(*fc)() = func;
	(*fc)();

	int* (*fc1)() = func1;
	fc1();

	auto fc11 = func1;
	fc11();

	array<std::string, 2> arr = { "111","222" };

	for (auto i : arr)
	{
		for (auto j : i)
		{
			cout << j << endl;
		}
	}
	
	
	return 0;
}