//Super useful program for formatting letters


#include "std_lib_facilities.h"

int main()
{
	cout<<"What is your first name sir?\n";
	string name = " ";
	cin>>name;
	cout<<"Hello, "<<name<<'\n';
	cout<<"Enter the name of the person you want to write to sir\n";
	string adressee = " ";
	cin>>adressee;
	cout<<"Please enter the body of your letter sir\n";
	string body = " ";
	cin>>body;
	cout<<"Let's check how is your friend doing sir? What is his/her name?\n";
	string friend_name = " ";
	cin>>friend_name;
	cout<<"What's the friend's sex sir?\nType either m or f sir\n";
	char friend_sex = 0;
	cin>>friend_sex;
	
	string call = " ";
	if (friend_sex == 'm') {
		call = "If you see " + friend_name + " please ask him to call me.";
	}
	if (friend_sex == 'f') {
		call = "If you see " + friend_name + " please ask her to call me.";
	}
	cout<<"What is the age of your friend sir?\n";
	int age = 0;
	cin>>age;
	if (age <= 0 || age >= 110) {
		cout<<"error (you must be fucking kidding me sir!)\n";
	}
	string age_message = " ";
	if (age < 12) {
		age_message = "Next year you will be" + (age+1) + '\n';
	}
	if (age == 17) {
		age_message = "Next year you will be able to vote.";
	}
	if (age > 70) {
		age_message = "I hope you are enjoying retirement.";
	}

	cout<<"\nHere's your letter sir\n\n\n";

	cout<<"Dear "<<adressee<<",\n"
		<<"	How are you? I am fine. I miss you.\n"
		<<"Have you seen "<<friend_name<<"?\n"
		<<call<<'\n'
		<<body<<'\n'
		<<"I hear you just had a birthday and you are "<<age<<" years young.\n"
		<<age_message<<'\n'
		<<"Yours sincerly,\n\n"
		<<name<<'\n';
}
