//Program that "bleeps" out words that I don't like

#include "std_lib_facilities.h"

int main()
{
	string disliked = "Broccoli";
	vector<string>words;
	string word;
	while(cin>>word)
		words.push_back(word);

	for (int i=0;i<words.size();++i)
		if (words[i] == disliked)
			cout<<"BLEEP"<<endl;
		else
		cout<<words[i]<<endl;
}
