//more exercises with loops

#include "std_lib_facilities.h"

int main()
{
	double val1 = 0.0;
	double max = 0.0;
	double min = 0.0;
	//conversion factors
	const double m_to_cm = 100;
	const double in_to_cm = 2.54;
	const double ft_to_in = 12;

	string unit = " ";
	cout<<"Give me some integer and unit (cm, m, in, ft)"<<endl;
	while(cin>>val1>>unit) {			
		cout<<"Value entered: "<<val1<<" "<<unit<<endl;
		if (unit != "cm" && unit != "ft" && unit != "m" && unit != "in") {
			cout<<"Invalid unit "<<unit<<endl;
			break;
		}
		else if (val1>max) {
			cout<<"the largest so far!"<<endl;
			max = val1;
		}
		else if (val1<min) {
			cout<<"the smallest so far!"<<endl;
			min = val1;
		}
	}
}
