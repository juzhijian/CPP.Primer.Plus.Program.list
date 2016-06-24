//源.cpp  -- 输入和输出
#include "one.h"
#include "Amain.h"

void AC()
{

	int AC_carrots;
	cout << "你有多少个胡萝卜?" << endl;
	cin >> AC_carrots;																	//C++ 输入
	cout << "这里还有2个.";
	AC_carrots = AC_carrots + 2;															//the next line conatenates output
	cout << "现在你有 " << AC_carrots << "个胡萝卜," << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}