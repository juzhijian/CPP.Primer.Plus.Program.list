// assgn_st.cpp -- assigning structures

#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int CL()
{
	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",
		0.20f,//如果不指定数据类型，那么小数常量会被认为是double类型的所以需要加f
		12.49
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;  // assign one structure to another
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;
	cin.get();
	return 0;
}
