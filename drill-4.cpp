//griding that C++ ...

#include "std_lib_facilities.h"

int main()
{
	double val1;
	double val2;
	cout<<"Gimme some doubles sir! ";
	while(cin>>val1>>val2)
		if (val1 == val2)
			cout<<"the numbers are equal"<<endl;
		else if (val1<val2)
			cout<<"the smaller value is: "<<val1<<" the larger value is: "<<val2<<endl;
		else
			cout<<"the smaller value is: "<<val2<<" the larger value is: "<<val1<<endl;
}
