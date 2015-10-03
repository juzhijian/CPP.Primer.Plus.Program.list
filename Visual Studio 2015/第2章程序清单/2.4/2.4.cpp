//源.CPP -- using the sqrt() function
#include<iostream>
#include<cmath>									//or math.h

int main()
{
	using namespace std;

	double area;
	cout << "进入你家多少平方英尺的地方:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "这是一个边长为 " << side
		<< "的正方形." << endl;
	cout << "  多么迷人!" << endl;
	cin.get();
	cin.get();
	return 0;
}