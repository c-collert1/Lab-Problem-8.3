#include <iostream>
using namespace std;

int romanCharValue(char r);

int main() {

	cout << romanCharValue('I');
}

int romanCharValue(char r) {

	int romanNumToDecimal = 0;
	if ( r == 'I') {
		romanNumToDecimal = 1;
	}
	else if (r == 'V') {
		romanNumToDecimal = 5;
	}
	else if (r == 'X') {
		romanNumToDecimal = 10;
	}
	else if (r == 'L') {
		romanNumToDecimal = 50;
	}
	else if (r == 'C') {
		romanNumToDecimal = 100;
	}
	else if (r == 'D') {
		romanNumToDecimal = 500;
	}
	else if (r == 'M') {
		romanNumToDecimal = 1000;
	}
	return romanNumToDecimal;
}