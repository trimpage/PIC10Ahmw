/*

Homework 6_3
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void remove_duplicates(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] == v[j]) {
				v.erase(v.begin() + j);
			}
		}
	}
}

int main() {
	char response = 'y';

	while (response == 'y') {
		vector<int> inputVector;
		int number;
		string input;

		std::cout << "Enter a list of integers: ";
		getline(cin, input);

		istringstream stream(input);
		while (stream >> number) {
			inputVector.push_back(number);
		}

		remove_duplicates(inputVector);
		
		std::cout << "The list without duplicates: ";
		for (int i = 0; i < inputVector.size(); i++) {
			std::cout << inputVector[i] << " ";
		}

		std::cout << endl << endl;
		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl;
	}
	return 0;
}