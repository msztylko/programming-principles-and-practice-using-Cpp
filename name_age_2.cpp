//read name and age (2nd version)

#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first_name and age\n";
	string first_name = "???"; //string variable
				  //("???" means "don't know the name")
	int age = -1; 	//integer varaible(-1 means "don't know the age")
	cin>>first_name>>age;
	cout<<"Hello, "<<first_name<<" (age "<<age<<")\n";
}

//default values added for case when the user provides incorrect input
