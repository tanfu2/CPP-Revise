#include<iostream>

int main()
{
	using namespace std;
	int a[] = { 1,2,3,4,5 };
	for (auto i : a)
	{
		cout << i << endl;
	}
	
	cin >> a[0];
	if (cin.fail() == false)
	{
		cout << "fail" << endl;
	}
}