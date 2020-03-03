//This program outputs the message "Hello, World!" to the monitor

//"#include directive" for importing other files
//Imported files usually have ".h" suffix called header or a header file
#include "std_lib_facilities.h"
//Every C++ program must have a main function to tell it where to start excetution.
int main()	//C++ programs start by executing the function main
{
	//cout is pronounced "see-out" and is abbreviation of "character output stream"
	cout<<"Hello, programming!\n";
	cout<<"Here we go!\n";
	return 0;
       //A zero (0) returned by main() indicates that program executed succesfully	
}
//Function has 4 parts
//return type -> int in this case
//a name -> main
//parameter list ->() the parameter list is empty
//function body -> {} list of actions to be performed
