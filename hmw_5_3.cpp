/*

Homework 5_3
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Country {
public:
	Country(string country_name, double country_area, unsigned int country_population, double country_density);
	string get_name() const;
	double get_area() const;
	unsigned int get_population() const;
	double get_density() const;
private:
	string name;
	double area;
	unsigned int population;
	double density = population / area;
};

Country::Country(string country_name, double country_area, unsigned int country_population, double country_density) {
	name = country_name;
	area = country_area;
	population = country_population;
	density = country_density;
}

string Country::get_name() const {
	return name;
}

double Country::get_area() const {
	return area;
}

unsigned int Country::get_population() const {
	return population;
}

double Country::get_density() const {
	return density;
}

bool incorrect_input_test(double input) {
	if ((cin.fail()) || input < 0) {
		std::cout << "Incorrect input. Exit!" << endl << endl;

		return true;
	}
	else 
		return false;
}

int main() {
	char response = 'y';

	vector<Country> countries;

	while (response == 'y') {
		string input_name;
		unsigned int input_population;
		double input_area;

		std::cout << "Enter country information." << endl;
		std::cout << "Enter the name: ";
		getline(cin, input_name);

		std::cout << "Enter the population: ";
		std::cin >> input_population;

		if (incorrect_input_test(input_population)) {
			response = 'n';
			continue;
		}

		std::cout << "Enter the area <km^2>: ";
		std::cin >> input_area;

		if (incorrect_input_test(input_area)) {
			response = 'n';
			continue;
		}

		double result_density = input_population / input_area;

		countries.push_back(Country(input_name, input_area, input_population, result_density));

		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		std::cout << endl;
		cin.ignore();
		cin.clear(1000);
	}

	string largest_area = "";
	string largest_population = "";
	string largest_density = "";

	double highest_area = 0;
	unsigned int highest_population = 0;
	double highest_density = 0;

	for (int i = 1; i < countries.size(); i++) {
		if (countries[i].get_area() > highest_area) {
			highest_area = countries[i].get_area();
			largest_area = countries[i].get_name();
		}
	}

	for (int i = 1; i < countries.size(); i++) {
		if (countries[i].get_population() > highest_population) {
			highest_population = countries[i].get_population();
			largest_population = countries[i].get_name();
		}
	}

	for (int i = 1; i < countries.size(); i++) {
		if (countries[i].get_density() > highest_density) {
			highest_density = countries[i].get_density();
			largest_density = countries[i].get_name();
		}
	}

	std::cout << "The country with the largest area: " << largest_area << endl;
	std::cout << "The country with the largest population: " << largest_population << endl;
	std::cout << "The country with the largest population density: " << largest_density << endl;
	
	system("pause");
	return(0);
}
