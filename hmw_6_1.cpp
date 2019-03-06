/*

Homework 6_1
Arian Owji
604649619

*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int sum(vector<int> a) {
	int n = a.size();
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (i != 0 && ((i % 2) == 1)) {
			sum -= a[i];
		}
		else {
			sum += a[i];
		}
	}
	return sum;
}

int main() {
	char response = 'y';

	while (response == 'y') {
		string input;
		int number;
		vector<int> list;

		std::cout << "Enter a list of integers: ";
		getline(cin, input);

		istringstream stream(input);
		while (stream >> number) {
			list.push_back(number);
		}

		std::cout << "The alternate sum = " << sum(list) << endl << endl;

		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		std::cout << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return 0;
}