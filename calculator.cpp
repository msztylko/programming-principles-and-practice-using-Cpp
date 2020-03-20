#include "std_lib_facilities.h"

get_token()	//read characters and compose tokens
		//use cin
expression()	//deal with + and -
		//calls term() and get_token()
term()		//deal with *,/ and %
		//calls primary() and get_token()
primary()	//deal with numbers and parantheses
		//calls espression() and get_token()

class Token {
public:
	char kind;
	double value;
	Token(char ch)				//constructor
		:kind(ch), value(0) {}		//initialize kind to ch and set value to 0
	Token(char ch, double val)		//constructor
		:kind(ch), value(val) {}	//initialize kind to ch and set value to val
};

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
