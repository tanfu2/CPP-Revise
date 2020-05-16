#include<iostream>
#include<fstream>
#include<istream>

int main()
{
	using namespace std;

	ofstream outFile;
	outFile.open("1.txt");
	outFile << "sss";
	outFile.close();

	ifstream inFile;
	inFile.open("1.txt");
	if (!inFile.is_open())
	{
		cout << "Can not open the file!" << endl;
		exit(EXIT_FAILURE);
	}
	string s;
	//char s[] = "111";
	while (inFile.good())
	{
		inFile >> s;
	}
	cout << s << endl;
	return 0;
}