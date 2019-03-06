/*

Homework 6_2
Arian Owji
604649619

*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b) {
	vector<int> newVector;
	newVector.reserve(a.size() + b.size());

	int largerSize;
	int smallerSize;

	if (a.size() > b.size()) {
		largerSize = a.size();
		smallerSize = b.size();
	}
	else {
		largerSize = b.size();
		smallerSize = a.size();
	}

	if (largerSize == b.size()) {
		for (int i = 0; i < largerSize; i++) {
			if (i < smallerSize) {
				newVector.push_back(a[i]);
				newVector.push_back(b[i]);
			}
			else {
				newVector.push_back(b[i]);
			}
		}
		return newVector;
	}
	else {
		for(int i = 0; i < largerSize; i++) {
			if (i < smallerSize) {
				newVector.push_back(a[i]);
				newVector.push_back(b[i]);
			}
			else {
				newVector.push_back(a[i]);
			}
		}
		return newVector;
	}
}

int main() {
	char response = 'y';

	while (response == 'y') {
		vector<int> a;
		vector<int> b;
		string input1;
		string input2;
		int number;

		std::cout << "Enter the first list of integers: ";
		getline(cin, input1);

		istringstream stream1(input1);
		while (stream1 >> number) {
			a.push_back(number);
		}

		std::cout << "Enter the second list of integers: ";
		getline(cin, input2);

		istringstream stream2(input2);
		while (stream2 >> number) {
			b.push_back(number);
		}

		vector<int> merged = merge(a, b);

		std::cout << "Merged vector: ";

		for (int i = 0; i < merged.size(); i++) {
			std::cout << merged[i] << " ";
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