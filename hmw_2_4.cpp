/*

Homework 2_4
Arian Owji
604649619

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int fold1 = 0;
	int fold2 = 1;
	int counter = 1;
	int x;

	char response = 'y';

	while (response == 'y') {
		std::cout << "Enter a positive integer: ";
		std::cin >> x;
		std::cout << endl;
		std::cout << "The first " << x << " Fibonacci numbers:" << endl;

		while (counter <= x) {
			int foldNew = fold1 + fold2;

			std::cout << "f(" << counter << ")=" << foldNew << endl;
			fold2 = fold1;
			fold1 = foldNew;
			counter++;
		}

		std::cout << endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		std::cout << endl;

		fold1 = 0;
		fold2 = 1;
		counter = 0;
	}
	return 0;
}
