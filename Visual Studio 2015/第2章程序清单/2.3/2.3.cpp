//Դ.cpp  -- ��������
#include<iostream>
int main()
{
	using namespace std;

	int carrots;

	cout << "���ж��ٸ����ܲ�?" << endl;
	cin >> carrots;																	//C++ ����
	cout << "���ﻹ��2��.";
	carrots = carrots + 2;														//the next line conatenates output
	cout << "�������� " << carrots << "�����ܲ�," << endl;
	cin.get();
	cin.get();
	return 0;
}