//read name and age
#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first name and age\n";
	string first_name;	// string variable
	int age;		// integer variable
	age = age * 12;
	cin>>first_name;	//read a string
	cin>>age;		//read an integer
	cout<<"Hello, "<<first_name<<" (you are "<<age<<" months old!)\n";
}
//If I type Marcin 24 the >> operator will read 'Marcin' into first_name
//24 into age. By convention, reading of strings is terminated by whitespace.
//>> operator ignores whitespace
