//what happens when some function throws an exception but you dont catch it

#include "std_lib_facilities.h"

void my_error(string s1, string s2)
{
	throw runtime_error(s1+s2);
}

int main() {
	double d = 0;
	cin>>d;
	if (!cin) my_error("some", "error");
}

