#include <iostream>

template <typename _Tx, typename _Ty>
auto multiply(_Tx x, _Ty y)->decltype(x * y)
{
	return x * y;
}
int main()
{
	using namespace std;
	
	cout << typeid(multiply(2, 3.0)).name() << endl;
	return 0;
}