#include "one.h"
#include "Bmain.h"

void Bmain()
{
	int Bmain_i = 1;
	while (Bmain_i == 1)
	{
		cout << "请选择要进入的题目：\n";
		cout << "1、地方\n";
		cout << "2、地方儿\n";
		cout << "8、返回上一级\n";
		int Bmain_a;
		cin >> Bmain_a;
		switch (Bmain_a)
		{
		case 1:
			system("Cls");
			//AA();
			Bmain_i = 0;
			break;
		case 8:
			system("Cls");
			main();
			Bmain_i = 0;
			break;
		default:cout << "你输入的序号没有对应的结果，请重新输入。" << endl;
			system("Cls");
			break;
		}
	}
}

