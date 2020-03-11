//program converts euros to polish zloty or polish zloty to euro

#include "std_lib_facilities.h"

int main()
{
	const double pln_per_euro = 4.32;	//number of polish zloty in one euro
	double amount = 1;			//amount of the given currency
	string currency = " ";
	cout<<"Please enter amount of money followed by a currnecy (pln or euro):\n";
	cin>>amount>>currency;
	
	if (currency == "pln")
		cout<<amount<<" pln == "<<amount/pln_per_euro<<" euro\n";
	else if (currency == "euro")
		cout<<amount<<" euro == "<<amount*pln_per_euro<<" pln\n";
	else
		cout<<"Sorry, I don't know currency called "<<currency<<'\n';
}
