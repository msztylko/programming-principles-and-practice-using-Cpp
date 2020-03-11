//loop for characters and corresponding integers

#include "std_lib_facilities.h"

int main()
{
	char character = 'a';
	while (character != 'z') {
		cout<<character<<'\t'<<int(character)<<endl;
		character = char(character+1);
	}
	cout<<character<<'\t'<<int(character)<<endl;
}
