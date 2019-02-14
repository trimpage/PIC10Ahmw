/*

Homework 4_1
Arian Owji
604649619

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

bool coin_toss(double p) {
	bool result;

	double toss = ((double) rand() / (RAND_MAX));

	if (toss < p) {
		result = true;
	}
	else { 
		result = false; 
	}

	return result;
}

int head_frequency(double p, int n) {
	int frequency = 0;

	for (int i = 0; i < n; i++) {
		if (coin_toss(p) == 1) {
			frequency += 1;
		}
		else if (coin_toss(p) == 0) {
			frequency += 0;
		}
	}

	return frequency;
}

int main() 
{
	srand(time(0));
	char response = 'y';

	while (response == 'y') {
		double p;
		int n;

		std::cout << "Enter the probability of heads 0<p<1: ";
		std::cin >> p;
		std::cout << "Enter the number of experiments: ";
		std::cin >> n;
		std::cout << endl;

		double heads_frequency = static_cast<double>(head_frequency(p, n)) / n;
		double distance = heads_frequency - p;

		std::cout << "\"Heads\" relative frequency: f=" << fixed << setprecision(6) << heads_frequency << endl;
		std::cout << "Distance: |f-p|=" << fixed << setprecision(6) << distance << endl << endl;

		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		std::cout << endl;
	}

	return 0;
}
