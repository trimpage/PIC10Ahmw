/*

Homework 1_5
Arian Owji
604649619

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int firstInput;
	int secondInput;

	std::cout << "Please enter the first time: ";
	std::cin >> firstInput;

	std::cout << "Please enter the second time: ";
	std::cin >> secondInput;

	int firstHours = firstInput / 100;
	int firstMinutes = firstInput % 100;
	int firstTime = firstHours * 60 + firstMinutes;

	int secondHours = secondInput / 100;
	int secondMinutes = secondInput % 100;
	int secondTime = secondHours * 60 + secondMinutes;

	int difference = secondTime - firstTime;
	difference = (difference + 60 * 24) % (60 * 24);

	int finalHours = difference / 60;
	int finalMinutes = difference % 60;

	std::cout << finalHours << " hours " << finalMinutes << " minutes " << endl;

	system("pause");

	return 0;
}
