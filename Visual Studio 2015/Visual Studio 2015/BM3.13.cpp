//3.13.CPP -- type changes on initialization
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 7.2E12;//int converted to float
	int guess(3.9832);//double conveted to int
	int debt = 7.2E12;//result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	cin.get();
	cin.get();
	return 0;
}