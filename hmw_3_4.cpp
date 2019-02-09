/*

Homework 3_4
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getBarcode(int x[]) {
	string barcode = "";

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

	return barcode;
}

int getCheckDigit(int x[]) {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += x[i];
	}

	int checkDigit = 10 - (sum % 10);

	return checkDigit;
}

int main()
{
	char response = 'y';
	int zipCode;
	int zipDigit[6];
	int checkDigit;
	string fullBarcode;

	while (response == 'y') {

		std::cout << "Please enter a zip code: ";
		std::cin >> zipCode;

		if ((zipCode > 100000) || (zipCode < 0) || cin.fail()) {
			std::cout << "Zip code you entered does not exist." << endl;
			exit(1);
		}

		for (int i = 4; i > -1; i--) {
			zipDigit[i] = zipCode % 10;

			zipCode /= 10;
		}

		checkDigit = getCheckDigit(zipDigit);
		
		zipDigit[5] = checkDigit;

		fullBarcode = getBarcode(zipDigit);

		std::cout << "Barcode = |" << fullBarcode << "|" << endl;

		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		std::cout << endl;
	}
	
	return 0;
}
