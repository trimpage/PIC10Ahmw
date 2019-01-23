/*

Homework 1_1
Arian Owji
604649619

*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{
	int first;
	int second;

	std::cout << "Enter the first integer: ";
	std::cin >> first;

	std::cout << "Enter the second integer: ";
	std::cin >> second;
	std::cout << endl;

	int sum = first + second;
	int difference = first - second;
	int product = first*second;
	int average = (first + second) / 2;
	int distance = fabs(difference);
	
	std::cout << first << "+" << second << "=" << sum << endl << endl;
	std::cout << first << "-" << second << "=" << difference << endl << endl;
	std::cout << first << "*" << second << "=" << product << endl << endl;
	std::cout << "0.5*(" << first << "+" << second << ")=" << average << endl << endl;
	std::cout << "|" << first << "-" << second << "|=" << distance << endl << endl;
	std::cout << "min(" << first << "," << second << ")=" << std::min(first, second) << endl << endl;
	std::cout << "max(" << first << "," << second << ")=" << std::max(first, second) << endl << endl;

	system("pause");

	return 0;
}