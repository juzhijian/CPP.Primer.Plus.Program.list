//源.CPP -- 自定义函数
#include "one.h"
#include "Amain.h"

void AE_simon(int);											//函数原型simon()

void AE()
{
	AE_simon(3);											//使用函数
	cout << "输入一个整数:";
	int AE_count;
	cin >> AE_count;
	AE_simon(AE_count);										//把Count的值带入到函数中计算
	cout << "完成了!" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

void AE_simon(int AE_n)										//定义simon()
{
	cout << "西蒙说摸你的脚趾" << AE_n << "次." << endl;
}															//void函数不需要返回值