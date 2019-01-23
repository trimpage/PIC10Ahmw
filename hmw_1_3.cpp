/*

Homework 1_3
Arian Owji
604649619

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double gas;
	double mpg;
	double price;

	std::cout << "Enter the number of gallons of gas in the tank: ";
	std::cin >> gas;

	std::cout << "Enter the fuel efficiency in miles per gallon: ";
	std::cin >> mpg;

	std::cout << "Enter the price of gas per gallon: ";
	std::cin >> price;
	std::cout << endl;

	double maxDistance = gas * mpg;
	double cost = (100 / mpg) * price;

	std::cout << "Maximum driving distance -> " << fixed << setprecision(2) << maxDistance << endl;
	std::cout << "Cost per 100 miles -> $" << fixed << setprecision(2) << cost << endl <<endl;

	system("pause");

	return 0;
}
