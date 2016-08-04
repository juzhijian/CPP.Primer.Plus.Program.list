#include "one.h"
#include "Dmain.h"

void Dmain()
{
	int Dmain_i = 1;
	while (Dmain_i == 1)
	{
		cout << "请选择要进入的题目：\n";
		cout << "1、地方\n";
		cout << "2、地方儿\n";
		cout << "8、返回上一级\n";
		int Dmain_a;
		cin >> Dmain_a;
		switch (Dmain_a)
		{
		case 1:
			system("Cls");
			DA();
			Dmain_i = 0;
			break;
		case 2:
			system("Cls");
			DB();
			Dmain_i = 0;
			break;
		case 8:
			system("Cls");
			main();
			Dmain_i = 0;
			break;
		default:cout << "你输入的序号没有对应的结果，请重新输入。" << endl;
			system("Cls");
			break;
		}
	}
}

