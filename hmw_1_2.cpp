/*

Homework 1_2
Arian Owji
604649619

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double due;
	double received;

	std::cout << "Amount due: $";
	std::cin >> due;

	std::cout << "Amount received: $";
	std::cin >> received;
	std::cout << endl;

	int penniesDue = static_cast<int>(due * 100);
	int penniesReceived = static_cast<int>(received * 100);

	int change = penniesReceived - penniesDue;

	std::cout << "Change given:" << endl << endl;

	int dollars = change / 100;

	std::cout << "dollars -> " << dollars << endl << endl;

	change -= (dollars * 100);
	int quarters = change / 25;

	std::cout << "quarters -> " << quarters << endl << endl;

	change -= (quarters * 25);
	int dimes = change / 10;

	std::cout << "dimes -> " << dimes << endl << endl;

	change -= (dimes * 10);
	int nickels = change / 5;

	std::cout << "nickels -> " << nickels << endl << endl;

	change -= (nickels * 5);

	std::cout << "pennies -> " << change << endl << endl;
	
	system("pause");

	return 0;
}
