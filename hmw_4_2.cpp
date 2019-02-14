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

calc_bin_data calc_parsing(const string& s) {
	calc_bin_data a;

	unsigned first = s.find("<");
	unsigned last = s.find(">");

	a.x1 = s.substr(first + 1, last - 1);

	string s2 = s.substr(last - first + 1);

	a.x2 = s2.substr(first + 2);
	a.x2.erase(a.x2.end());

	a.op = s2[0];

	return a;
}

int convert_binary_to_decimal(const string& s) {
	bool negative = 0;

	if (s[0] == '-') {
		bool negative = 1;
	}
	
	long binary_to_convert = stoi(s);

	if (negative) {
		binary_to_convert *= -1;
	}

	int decimal_number = 0;
	int i = 0;
	int remainder;

	while (binary_to_convert != 0) {
		remainder = binary_to_convert % 10;
		binary_to_convert /= 10;
		decimal_number += remainder * pow(2, i);
		++i;
	}

	if (negative) {
		decimal_number *= -1;
	}
	std::cout << decimal_number;
	return decimal_number;
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
		calc_bin_data a;
		string input;

		std::cout << "Enter an expression <in binary format>: ";
		std::cin >> input;

		a = calc_parsing(input);

		int first_number = convert_binary_to_decimal(a.x1);
		int second_number = convert_binary_to_decimal(a.x2);
		int result_number;

		if (a.op == '+') {
			result_number = first_number + second_number;
		}
		else if (a.op == '-') {
			result_number = first_number - second_number;
		}
		else if (a.op == '*') {
			result_number = first_number * second_number;
		}
		else if (a.op == '/') {
			result_number = first_number / second_number;
		}
		else {
			result_number = first_number % second_number;
		}

		string binary_result = convert_decimal_to_binary(result_number);

		string result_sign = "";

		if (result_number < 0) {
			result_sign = "-";
		}
		
		std::cout << "--> in binary representation: " << input << "=" << result_sign << binary_result << endl;
		std::cout << "--> in decimal representation: <" << first_number << ">" << a.op << "<"
			<< second_number << ">=" << result_number << endl << endl;

		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		std::cout << endl;
	}

	return 0;
}
