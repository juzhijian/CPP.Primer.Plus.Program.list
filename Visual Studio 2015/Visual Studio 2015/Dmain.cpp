#include "one.h"
#include "Dmain.h"

void Dmain()
{
	int Dmain_i = 1;
	while (Dmain_i == 1)
	{
		cout << "��ѡ��Ҫ�������Ŀ��\n";
		cout << "1���ط�\n";
		cout << "2���ط���\n";
		cout << "8��������һ��\n";
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
		default:cout << "����������û�ж�Ӧ�Ľ�������������롣" << endl;
			system("Cls");
			break;
		}
	}
}

