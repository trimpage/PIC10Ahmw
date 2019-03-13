/*

Homework 7_3
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void swap(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(double* a, int a_size) {
	double* b = a + a_size - 1;

	while (a < b) {
		swap(a, b);
		a++;
		b--;
	}
}

void print(double* a, int a_size) {
	for (double* p = a; p < a + a_size; p++) {
		if (p == a + a_size - 1) {
			std::cout << *p << endl;
		}
		else {
			std::cout << *p << ", ";
		}
	}
}

int main() {
	char response = 'y';

	while (response == 'y') {
		string input;
		int aSize;
		double number;
		int numberCounter = 0;
		int sizeCounter = 0;

		std::cout << "Enter a list of numbers: ";
		getline(cin, input);

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == ' ') {
				sizeCounter += 1;
			}
		}

		aSize = sizeCounter + 1;

		double* array = new double[aSize];

		istringstream stream(input);
		while (stream >> number) {
			array[numberCounter] = number;
			numberCounter += 1;
		}

		reverse(array, aSize);

		std::cout << "Reversed list: ";
		print(array, aSize);

		std::cout << endl;
		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl;
	}
	return 0;
}