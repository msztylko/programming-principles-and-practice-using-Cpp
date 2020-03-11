//program converts euros to polish zloty or polish zloty to euro

#include "std_lib_facilities.h"

int main()
{
	const double pln_per_euro = 4.32;	//number of polish zloty in one euro
	double amount = 1;			//amount of the given currency
	char currency = ' ';
	cout<<"Please enter amount of money followed by a currnecy (p or e):\n";
	cin>>amount>>currency;
 	switch (currency) {	
	case 'p':
		cout<<amount<<" pln == "<<amount/pln_per_euro<<" euro\n";
		break;
	case 'e':
		cout<<amount<<" euro == "<<amount*pln_per_euro<<" pln\n";
		break;
	default:
		cout<<"Sorry, I don't know currency called "<<currency<<'\n';
		break;
	}
}
