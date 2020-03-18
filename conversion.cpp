//more exercises with loops

#include "std_lib_facilities.h"

int main()
{
	double val1 = 0.0;
	double max = 0.0;
	double min = 100.0;	//this should be done in some different way
	double sum = 0.0;
	int counter = 0;
	//conversion factors
	const double m_to_cm = 100.0;
	const double in_to_cm = 2.54;
	const double ft_to_in = 12;

	string unit = " ";
	cout<<"\nGive me some double and unit (cm, m, in, ft)"<<endl;
	while(cin>>val1>>unit) {		
		cout<<"\nValue entered: "<<val1<<" "<<unit<<endl;
		if (unit != "cm" && unit != "ft" && unit != "m" && unit != "in") {
			cout<<"Invalid unit "<<unit<<endl;
			break;
		}
		double converted = 0.0;
		if (unit == "cm")
			converted = val1/m_to_cm;
		if (unit == "m")
			converted = val1;
		if (unit == "in")
			converted = (val1 * in_to_cm)/m_to_cm;
		if (unit == "ft")
			converted = (val1 * ft_to_in * in_to_cm)/m_to_cm;
		cout<<"Your value after conversion to meters "<<converted<<" m"<<endl;
		if (converted > max)
			max = converted;
		if (converted < min)
			min = converted;
		sum += converted;
		++counter;
	}
	cout<<"The smallest value: "<<min<<"m, the largest: "<<max<<"m, number of values: "<<counter<<" and the sum of values: "<<sum<<" m"<<endl;
}
