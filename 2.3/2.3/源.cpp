//源.cpp  -- 输入和输出
#include<iostream>
int main()
{
	using namespace std;

	int carrots;

	cout << "你有多少个胡萝卜?" << endl;
	cin >> carrots;																	//C++ 输入
	cout << "这里还有2个.";
	carrots = carrots + 2;														//the next line conatenates output
	cout << "现在你有 " << carrots << "个胡萝卜," << endl;
	cin.get();
	cin.get();
	return 0;
}