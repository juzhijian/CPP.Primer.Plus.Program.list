//Դ.CPP -- using the sqrt() function
#include<iostream>
#include<cmath>									//or math.h

int main()
{
	using namespace std;

	double area;
	cout << "������Ҷ���ƽ��Ӣ�ߵĵط�:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "����һ���߳�Ϊ " << side
		<< "��������." << endl;
	cout << "  ��ô����!" << endl;
	cin.get();
	cin.get();
	return 0;
}