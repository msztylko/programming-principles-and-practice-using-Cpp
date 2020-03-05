//detection of repeated words

#include "std_lib_facilities.h"

int main()
{
	string previous = " ";	//previous wordl initialized to "not a word"
	string current;		//current word
	while (cin>>current) {	//read s strem of words
		if (previous == current)
			cout<<"repeated word: "<<current<<'\n';
		previous=current;
	}
}
