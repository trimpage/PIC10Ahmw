/*

Homework 6_1
Arian Owji
604649619

*/
/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sum(vector<int> a) {
	int n = a.size();
	double sum = 0;

	for (int i = 0; i < n; i++) {
		if (i != 0 && (i % 2) == 0) {
			sum -= a[n];
		}
		else {
			sum += a[n];
		}
	}
	return sum;
}

int main() {
	char response = 'y';
	int input;
	vector<int> list;

	while (response == 'y') {
		std::cout << "Enter a list of integers: ";
		while (cin >> input) {
			list.push_back(input);
		}

		std::cout << "The alternate sum = " << sum(list) << endl << endl;

		std::cout << "Continue <y/n>?";
		std::cin >> response;
	}
	return 0;
}*/