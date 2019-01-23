/*

Homework 1_4
Arian Owji
604649619

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number;

	std::cout << "Please enter an integer between 1,000 and 999,999: ";
	std::cin >> number;

	string firstHalf = number.substr(0, (number.length() - 4));
	string secondHalf = number.substr((number.length() - 3), 3);
	string finalNumber = firstHalf + secondHalf;

	std::cout << "Output: " << finalNumber << endl <<endl;

	system("pause");
	
	return 0;
}
