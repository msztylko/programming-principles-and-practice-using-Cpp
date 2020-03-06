//Simple program for converting miles to kilometers

#include "std_lib_facilities.h"

int main()
{
	cout<<"Type distance in miles\n";
	double miles = 0;
	cin>>miles;
	double kilometers = 1.609 * miles;
	cout<<miles<<" miles is equal "<<kilometers<<" kilometers.\n";
}
	
