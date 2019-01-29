/*

Homework 2_3
Arian Owji
604649619

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char response = 'y';
	double x;
	int count = 0;
	double sum = 0;
	double sumSquares = 0; 

	while (response == 'y') {
		std::cout << "Enter a list of values <of type double>: ";

		   while (std::cin >> x) {
			count++;
			sum += x;
			sumSquares += (pow(x, 2));
		}
		
		double mean = sum / count;
		double deviation = (sqrt((sumSquares - ((pow(sum, 2)) / count)) / (count - 1)));

		std::cout << "Number = " << count << endl;
		std::cout << "Mean = " << mean << endl;
		std::cout << "Deviation = " << deviation << endl;
	
		std::cout << endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		std::cout << endl;
		
		count = 0;
		sum = 0;
		sumSquares = 0;
	}
	return 0;
}
