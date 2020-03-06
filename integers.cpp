//playing with integers. Sir.

#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter two integers sir\n";
	int val1;
	int val2;
	cin>>val1>>val2;
	
	if (val1 < val2) {
		cout<<val1<<" is smaller than "<<val2<<endl;
		int diff = val2 - val1;
	}
	if (val1 > val2) {
		cout<<val2<<"is smaller than "<<val1<<endl;
		int diff = val1 - val2;
	}
	int sum = val1 + val2;
	cout<<"The sum of these numbers is equal "<<sum<<endl;

	cout<<"The difference of these numbers is equal "<<diff<<endl;

	int product = val1 * val2;
	cout<<"The product of these numbers is equal "<<product<<endl;

	double ratio = val1 / val2;
	cout<<"The ratio of these numbers is equal "<<ratio<<endl;
}

