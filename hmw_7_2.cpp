/*

Homework 7_2
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double* maximum(double* a, int a_size) {
	if (a_size == 0) {
		return NULL;
	}

	double highest = *a;
	double* p;
	double* index;

	for (p = a + 1; p < a + a_size; p++) {
		if (*p > highest) {
			highest = *p;
			index = p;
		}
	}

	std::cout << "Maximal element: " << highest << endl;
	std::cout << "Index of maximal element: " << (index - a) << endl << endl;

	return &highest;
}

int main() {
	char response = 'y';

	while (response == 'y') {
		string input;
		int aSize;
		double number;
		int sizeCounter = 0;
		int numberCounter = 0;

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

		maximum(array, aSize);

		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl;
	}
	return 0;
}

