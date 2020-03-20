#include "std_lib_facilities.h"


class Token {
public:
	char kind;
	double value;
	Token(char ch)				//constructor
		:kind(ch), value(0) {}		//initialize kind to ch and set value to 0
	Token(char ch, double val)		//constructor
		:kind(ch), value(val) {}	//initialize kind to ch and set value to val
};

Token get_token()	//read characters and compose tokens
			//use cin
double expression()	//deal with + and -;calls term() and get_token()
{
	double left = term();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '+':			
			left += term();
			t = get_token()
			break;
		case '-':
			left -= term();
			t = get_token();
			break;
		default:
			return left;
		}
	}
}

double term()
{
	double left = primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '*':
			left *= primary();
			t = get_token();
			break;
		case '/':
			left /= primary();
			t = get_token();
			break;
		case '%':
			left %= primary();
			t = get_token();
			break;
		default:
			return left;
		}
	}
}


		
double primary()	//deal with numbers and parantheses
			//calls espression() and get_token()

//does it work?
Token get_token();

vector<Token> tok;

int main()
{
	while(cin) {
		Token t = get_token();
		tok.push_back(t);
	}
	//...
}
