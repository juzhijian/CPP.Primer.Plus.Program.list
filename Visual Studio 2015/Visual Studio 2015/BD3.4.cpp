﻿//3.4.CPP -- dispaly values in hex and octal
#include <iostream>
using namespace std;
int BD()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << "(decimal of 42)" << endl;
	cout << hex;							//manipulator for changing number base
	cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
	cout << oct;							//manipulator for changing number base
	cout << "inseam = " << inseam << "(octal for 42)" << endl;
	cin.get();
	cin.get();
	return 0;
}