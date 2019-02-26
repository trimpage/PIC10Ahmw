/*

Homework 5_4
Arian Owji
604649619

*/

#include <iostream>
#include "address.h"

Address::Address(unsigned int a_house_number, std::string a_street, std::string a_city, std::string a_state, unsigned int a_zipcode) {
	house_number = a_house_number;
	zipcode = a_zipcode;
	street = a_street;
	city = a_city;
	state = a_state;
};

Address::Address(unsigned int a_house_number, std::string a_street, unsigned int an_apt_number, std::string a_city, std::string a_state, unsigned int a_zipcode) {
	house_number = a_house_number;
	zipcode = a_zipcode;
	street = a_street;
	apt_number = an_apt_number;
	city = a_city;
	state = a_state;
};

void Address::print() {
	std::cout << "Printing the address record" << std::endl << "---------------------------" << std::endl << "Address: " << std::endl
		<< house_number << " " << street << " " << apt_number << std::endl << city << ", " << state << ", " << zipcode << std::endl << zipcode_to_barcode(zipcode) << std::endl << std::endl;
}

bool Address::comes_before(const Address& a) {
	if (zipcode < a.get_zipcode()) {
		return true;
	}
	else {
		return false;
	}
}

unsigned int Address::get_house_number() const {
	return house_number;
}

unsigned int Address::get_apt_number() const {
	return apt_number;
}

unsigned int Address::get_zipcode() const {
	return zipcode;
}

std::string Address::get_street() const {
	return street;
}

std::string Address::get_city() const {
	return city;
}

std::string Address::get_state() const {
	return state;
}

std::string Address::get_barcode() const {
	return barcode;
}

std::string Address::zipcode_to_barcode(unsigned int zcode) {
	int zipDigit[6];
	int checkDigit;
	std::string fullBarcode;

	if ((zcode > 100000) || (zcode < 0) || std::cin.fail()) {
		std::cout << "Zip code you entered does not exist." << std::endl;
		exit(1);
	}

	for (int i = 4; i > -1; i--) {
		zipDigit[i] = zcode % 10;

		zcode /= 10;
	}

	checkDigit = getCheckDigit(zipDigit);

	zipDigit[5] = checkDigit;

	fullBarcode = getBarcode(zipDigit);

	return fullBarcode;
}

int getCheckDigit(int x[]) {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += x[i];
	}

	int checkDigit = 10 - (sum % 10);

	return checkDigit;
}

std::string getBarcode(int x[]) {
	std::string barcode = "|";

	for (int i = 0; i < 7; i++) {
		if (x[i] == 1) {
			barcode += ":::||";
		}
		else if (x[i] == 2) {
			barcode += "::|:|";
		}
		else if (x[i] == 3) {
			barcode += "::||:";
		}
		else if (x[i] == 4) {
			barcode += ":|::|";
		}
		else if (x[i] == 5) {
			barcode += ":|:|:";
		}
		else if (x[i] == 6) {
			barcode += ":||::";
		}
		else if (x[i] == 7) {
			barcode += "|:::|";
		}
		else if (x[i] == 8) {
			barcode += "|::|:";
		}
		else if (x[i] == 9) {
			barcode += "|:|::";
		}
		else if (x[i] == 0) {
			barcode += "||:::";
		}
	}
	barcode += "|";

	return barcode;
}
