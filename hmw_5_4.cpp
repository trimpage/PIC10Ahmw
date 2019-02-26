/*

Homework 5_4
Arian Owji
604649619

*/

#include <iostream>
#include <sstream>
#include "address.h"

int main() {
	char response = 'y';

	while (response == 'y') {
		unsigned int input_house_number;
		unsigned int input_apt_number = 0;
		unsigned int input_zipcode;
		std::string input_street;
		std::string input_city;
		std::string input_state;
		std::string input_apt_number_test;
		std::string input = "";
		bool has_apt_number = 0;

		std::cout << "Address input" << std::endl << "-------------" << std::endl << "House number: ";
		std::cin >> input_house_number;
		std::cin.ignore();

		std::cout << "Street: ";
		getline(std::cin, input_street);

		std::cout << "Apartment number: ";
		getline(std::cin, input_apt_number_test);

		if (input_apt_number_test != "\n") {
			std::cin.unget();
			getline(std::cin, input);
			std::istringstream(input) >> input_apt_number;
			has_apt_number = 1;
		}

		std::cout << "City: ";
		getline(std::cin, input_city);

		std::cout << "State: ";
		getline(std::cin, input_state);

		std::cout << "Zipcode: ";
		std::cin >> input_zipcode;
		std::cout << std::endl;

		if (has_apt_number == 1) {
			Address address(input_house_number, input_street, input_apt_number, input_city, input_state, input_zipcode);
			address.print();
		}
		else {
			Address address(input_house_number, input_street, input_city, input_state, input_zipcode);
			address.print();
		}

		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		std::cout << std::endl;
		std::cin.ignore();
		std::cin.clear(1000, '\n');
	}

	return 0;
}