//Դ.CPP -- �Զ��庯��
#include<iostream>
void simon(int);			//����ԭ��simon()

int main()
{
	using namespace std;
	simon(3);											//ʹ�ú���
	cout << "����һ������:";
	int count;
	cin >> count;
	simon(count);								//��Count��ֵ���뵽�����м���
	cout << "�����!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)									//����simon()
{
	using namespace std;
	cout << "����˵����Ľ�ֺ" << n << "��." << endl;
}															//void��������Ҫ����ֵ