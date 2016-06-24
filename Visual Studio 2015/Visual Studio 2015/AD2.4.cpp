//源.CPP -- using the sqrt() function
#include "one.h"
#include "Amain.h"									//or math.h

void AD()
{

	double AD_area;
	cout << "进入你家多少平方英尺的地方:";
	cin >> AD_area;
	double AD_side;
	AD_side = sqrt(AD_area);
	cout << "这是一个边长为 " << AD_side
		<< "的正方形." << endl;
	cout << "  多么迷人!" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}