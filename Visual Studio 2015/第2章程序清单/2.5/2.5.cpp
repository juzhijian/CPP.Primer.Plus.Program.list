//源.CPP -- 自定义函数
#include<iostream>
void simon(int);			//函数原型simon()

int main()
{
	using namespace std;
	simon(3);											//使用函数
	cout << "输入一个整数:";
	int count;
	cin >> count;
	simon(count);								//把Count的值带入到函数中计算
	cout << "完成了!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)									//定义simon()
{
	using namespace std;
	cout << "西蒙说摸你的脚趾" << n << "次." << endl;
}															//void函数不需要返回值