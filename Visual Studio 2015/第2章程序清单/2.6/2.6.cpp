//Դ.cpp -- converts stone to pounds
#include<iostream>
int stonetold(int);					//function prototype
int main()
{
	using namespace std;
	int stone;
	cout << "ʯͷ������Ϊ:";
	cin >> stone;
	int pounds = stonetold(stone);
	cout << stone << "stone=";
	cout << pounds << "Ӣ��" << endl;
	cin.get();
	cin.get();
	return 0;
}

int stonetold(int sts)
{
	return 14 * sts;
}