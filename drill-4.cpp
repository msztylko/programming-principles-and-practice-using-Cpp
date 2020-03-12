//griding that C++ ...

#include "std_lib_facilities.h"

int main()
{
	int val1;
	int val2;
	cout<<"Gimme so integers sir! ";
	while(cin>>val1>>val2)
		if (val1<val2)
			cout<<"the smaller value is: "<<val1<<" the larger value is: "<<val2<<endl;
		else
			cout<<"the smaller value is: "<<val2<<" the larger value is: "<<val1<<endl;
}
