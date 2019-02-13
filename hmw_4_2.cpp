/*

Homework 4_2
Arian Owji
604649619

*/

#include <iostream>
#include <string>

using namespace std;

struct calc_bin_data {
	string x1;
	string x2;
	char op;
};

calc_bin_data a;
calc_bin_data b;
calc_bin_data c;

calc_bin_data calc_parsing(const string& s) {
	unsigned first = s.find("<");
	unsigned last = s.find(">");
	
	a.x1 = s.substr(first + 1, last - first - 1);

	string s2 = s.substr(last - first + 1);

	b.x2 = s2.substr(first + 2, last);

	c.op = s2[0];

	return a, b, c;
}

int convert_binary_to_decimal(const string& s) {
	return 0;
}

string convert_decimal_to_binary(int n) {
	string s;
	while (n != 0) {
		s = (n % 2 == 0 ? "0" : "1") + s;
		n /= 2;
	}
	return s;
}

int main() 
{
	char response = 'y';

	while (response == 'y') {
		string input;

		std::cout << "Enter an expression <in binary format>: ";
		std::cin >> input;

		calc_parsing(input);

		int firstNumber = stoi(a.x1);
		int secondNumber = stoi(b.x2);
		int resultNumber;

		if (c.op == '+') {
			resultNumber = firstNumber + secondNumber;
		}
		else if (c.op == '-') {
			resultNumber = firstNumber - secondNumber;
		}
		else if (c.op == '*') {
			resultNumber = firstNumber * secondNumber;
		}
		else if (c.op == '/') {
			resultNumber = firstNumber / secondNumber;
		}
		else {
			resultNumber = firstNumber % secondNumber;
		}


		string firstBinary = convert_decimal_to_binary(firstNumber);
		string secondBinary = convert_decimal_to_binary(secondNumber);
		string resultBinary = convert_decimal_to_binary(resultNumber);

		std::cout << "--> in binary representation: " << input << "=" << resultBinary;






	}

	return 0;
}
