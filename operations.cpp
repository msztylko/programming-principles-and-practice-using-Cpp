//Let do some operations

#include "std_lib_facilities.h"

int main()
{
	cout<<"Give me some count and name sir!\n";
	int count;
	string name;
	cin>>count;
	cin>>name;
	cout<<"Here's count "<<count<<" and some nice name "<<name<<"\n";

	int c2 = count+2;
	string s2 = name + "Jr.";
	cout<<"My first change\n";
	cout<<"Count is now "<<c2<<" and name is now "<<s2<<"\n";

	int c3 = count -2;
//	string s3 = name - "Jr.";
	cout<<"Let me revert these changes!\n";
	cout<<"Count is now "<<c3<<" and name is now "<<s2<<"\n";

}
