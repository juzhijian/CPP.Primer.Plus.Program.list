//源.cpp -- 食品处理程序
//输出显示一个变量
#include "one.h"
#include "Amain.h"

void AB()
{
	int AB_carrots;									//声明一个整形变量

	AB_carrots = 25;								//给变量赋值
	cout << "我有";
	cout << AB_carrots;								//显示变量的值
	cout << "个胡萝卜。";
	cout << endl;
	AB_carrots = AB_carrots - 1;						//修改变量
	cout << "嘎吱,嘎吱.现在我有" << AB_carrots << "个胡萝卜." << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}