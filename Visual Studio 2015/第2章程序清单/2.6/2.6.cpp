//源.cpp -- converts stone to pounds
#include<iostream>
int stonetold(int);					//function prototype
int main()
{
	using namespace std;
	int stone;
	cout << "石头的重量为:";
	cin >> stone;
	int pounds = stonetold(stone);
	cout << stone << "stone=";
	cout << pounds << "英镑" << endl;
	cin.get();
	cin.get();
	return 0;
}

int stonetold(int sts)
{
	return 14 * sts;
}