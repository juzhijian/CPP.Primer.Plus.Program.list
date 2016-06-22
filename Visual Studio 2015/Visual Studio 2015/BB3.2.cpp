//3.2.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0							//makes ZERO symbol for 0 value
#include <climits>					//defines INT_MAX as largest int value
int main()
{
	using namespace std;
	short sam = SHRT_MAX;		//lnitialize a variable to max value
	unsigned short sue = sam;	//okay if variable sam already defined

	cout << "sam has" << sam << " dollars and sue has " << sue;
	cout << " dollsrs deposited." << endl
		<< "add $1 to sach account." << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << "sam has" << sam << " dollars and sue has " << sue;
	cout << "dollsrs deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "sam has" << sam << " dollars and sue has " << sue;
	cout << "dollsrs deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "sam has" << sam << " dollars and sue has " << sue;
	cout << "dollsrs deposited." << endl << "Lucky Sue!" << endl;
	cin.get();
	cin.get();
	return 0;
}