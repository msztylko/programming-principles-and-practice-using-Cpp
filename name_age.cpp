//read name and age
#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first name and age\n";
	string first_name;	// string variable
	double age;		// integer variable
	cin>>first_name;	//read a string
	cin>>age;		//read an integer
	int months = age * 12;
	cout<<"Hello, "<<first_name<<" (you are "<<12*age<<" months old!)\n";
	cout<<"Hello, "<<first_name<<" (you are "<<months<<" months old!)\n";

}
