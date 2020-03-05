//more examples of problems with squeezing bigger types into smallers

#include "std_lib_facilities.h"

int main()
{
	double d = 0;
	while (cin>>d) {	//repeat the statemnets below
				//as long aa we type in numbers
		int i = d;	//try to squeeze a double into an int
		char c = i; 	//try to squeeze an int into a char
		int i2 = c; 	//get the integer value of the character
		cout<<"d == "<<d		//the original double
		    <<" i == "<<i		//converted to int
		    <<" i2 == "<<i2		//int value of char
		    <<" char(" <<c<<" )\n";	//the char
	}
}
