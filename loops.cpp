//more exercises with loops

#include "std_lib_facilities.h"

int main()
{
	double val1 = 0.0;
	double max = 0.0;
	double min = 0.0;
	cout<<"Give me some integer sir!"<<endl;
	while(cin>>val1) {
		cout<<"Value entered: "<<val1<<endl;
		if (val1>max) {
			cout<<"the largest so far!"<<endl;
			max = val1;
		}
		else if (val1<min) {
			cout<<"the smallest so far!"<<endl;
			min = val1;
		}
	}
}
