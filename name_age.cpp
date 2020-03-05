//read name and age
#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first name and age\n";
	string first_name;	// string variable
	double age;		// integer variable
//	int months = age * 12;
	cin>>first_name;	//read a string
	cin>>age;		//read an integer
	cout<<"Hello, "<<first_name<<" (you are "<<12*age<<" months old!)\n";
}
//If I type Marcin 24 the >> operator will read 'Marcin' into first_name
//24 into age. By convention, reading of strings is terminated by whitespace.
//>> operator ignores whitespace
//
//It works this way, but I wonder why it's incorrect if instead of 12*age I pass months variable
