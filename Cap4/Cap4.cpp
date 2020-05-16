#include<iostream>
#include<string>

int main()
{
	using namespace std;
	
	int i = (3 + 3, 6 + 6);
	cout << ++i + i++ << endl;
	
	return 0;
}

//typedef char(*AP)[5];
//AP foo(char* p) {
//    for (int i = 0; i < 3; i++) {
//        p[strlen(p)] = 'A';
//    }
//    return (AP)p + 1;
//}
//int main() {
//    using namespace std;
//    char s[] = "FROG\0SEAL\0LION\0LAMB"; 
////    puts(foo(s)[1] + 2);
//    cout << foo(s)[1][0];
//}

//int main()
//{
//	using namespace std;
//
//	//释放空指针是安全的
//	int* o = nullptr;
//	delete o;
//
//	delete[]a;
//	
//
//
//	//delete p;
//	
//	return 0;
//}