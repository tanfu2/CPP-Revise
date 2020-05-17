#include<iostream>

template<typename T>
void f1(T &&s)
{
	std::cout << "f1&&" << std::endl;
}

template<typename T>
void f1(T &s)
{
	std::cout << "f1&" << std::endl;
}

template<typename T>
void f1(const T& s)
{
	std::cout << "const f1&" << std::endl;
}

void ff(int a)
{
	std::cout << "ff" << std::endl;
}

template<typename S>
void ff(S a)
{
	std::cout << "T ff" << std::endl;
}

template <> void ff(float a)
{
	std::cout << "Explicit ff" << std::endl;
}

template<typename T1,typename T2>
void fucc(T1 a, T2 b)
{
	decltype(a + b) c = a + b;
}


int main()
{
	using namespace std;
	//double a = 0.2;
	//const int& b = a;
	//cout << b << endl;


	ff(1);
	ff(1.f);
	ff(1.0);

	int a = 1;
	const int b = a;
	const int& c = a;
	const int&& d = 1;
	int& e = a;
	int&& f = 1;

	f1(a);	//&
	f1(b);	//const&
	f1(c);	//const&
	f1(d);	//const&
	f1(e);	//&
	f1(f);	//&
	f1(1);	//&&

	return 0;
}