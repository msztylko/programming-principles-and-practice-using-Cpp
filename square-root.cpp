//calculate and print a table of squares 0-99

#include "std_lib_facilities.h"

int main()
{
	for (int i=0; i<100; ++i)
		cout<<i<<'\t'<<sqrt(i)<<'\n';
}
