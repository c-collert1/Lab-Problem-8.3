#include <iostream>
using namespace std;

int convertRomanToInt(string s);
int romanCharValue(string r);

int main() {
    
    string romanNumeral;
    cout << "Enter roman Numeral: ";
    cin >> romanNumeral;
    cout << convertRomanToInt(romanNumeral);
    return 0;
}

int convertRomanToInt(string s) {
    int result = 0;

    while (s.length() > 0) {
   
        string firstTwo = s.substr(0, 2);

        if (firstTwo == "IV") {
            result += 4;
            s = s.substr(2);
        }
        else if (firstTwo == "IX") {
            result += 9;
            s = s.substr(2);
        }
        else if (firstTwo == "XL") {
            result += 40;
            s = s.substr(2);
        }
        else if (firstTwo == "XC") {
            result += 90;
            s = s.substr(2);
        }
        else if (firstTwo == "CD") {
            result += 400;
            s = s.substr(2);
        }
        else if (firstTwo == "CM") {
            result += 900;
            s = s.substr(2);
        }
        else {
           
            result += romanCharValue(s.substr(0, 1));
            s = s.substr(1); 
        }
    }
    return result;
}

int romanCharValue(string r) {
    int romanNumToDecimal = 0;
    if (r == "I") {
        romanNumToDecimal = 1;
    }
    else if (r == "V") {
        romanNumToDecimal = 5;
    }
    else if (r == "X") {
        romanNumToDecimal = 10;
    }
    else if (r == "L") {
        romanNumToDecimal = 50;
    }
    else if (r == "C") {
        romanNumToDecimal = 100;
    }
    else if (r == "D") {
        romanNumToDecimal = 500;
    }
    else if (r == "M") {
        romanNumToDecimal = 1000;
    }
    return romanNumToDecimal;
}
