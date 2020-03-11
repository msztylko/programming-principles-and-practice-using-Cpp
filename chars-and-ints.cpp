//loop for characters and corresponding integers

#include "std_lib_facilities.h"

int main()
{
	for (char character = 'a'; character != 'z'; character = char(character+1)) {
		cout<<character<<'\t'<<int(character)<<endl;
	}
}

