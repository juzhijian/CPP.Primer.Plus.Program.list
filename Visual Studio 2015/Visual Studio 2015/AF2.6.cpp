//源.cpp -- converts stone to pounds
#include "one.h"
#include "Amain.h"

int AF_stonetold(int);					//function prototype

void AF()
{
	int AF_stone;
	cout << "石头的重量为:";
	cin >> AF_stone;
	int AF_pounds = AF_stonetold(AF_stone);
	cout << AF_stone << "stone=";
	cout << AF_pounds << "英镑" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

int AF_stonetold(int AF_sts)
{
	return 14 * AF_sts;
}