//源.cpp -- 食品处理程序
//输出显示一个变量
#include <iostream>
int main()
{
	using namespace std;
	int carrots;								//声明一个整形变量

	carrots = 25;								//给变量赋值
	cout << "我有";
	cout << carrots;						//显示变量的值
	cout << "个胡萝卜。";
	cout << endl;
	carrots = carrots - 1;					//修改变量
	cout << "嘎吱,嘎吱.现在我有" << carrots << "个胡萝卜." << endl;
	cin.get();
	cin.get();
	return 0;
}