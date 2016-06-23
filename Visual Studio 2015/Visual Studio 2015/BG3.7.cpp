//bondini.CPP -- using escape sequences
#include <iostream>
int BG()
{
	using namespace std;
	cout << "\aOperation \"HyperHyper\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou enterd " << code << "...\n";
	cout << "\aCode verified ! Proceed with Plan Z3!\n";
	cin.get();
	cin.get();
	return 0;
}