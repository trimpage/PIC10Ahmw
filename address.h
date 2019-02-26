/*

Homework 5_4
Arian Owji
604649619

*/

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
public:
	Address(unsigned int a_house_number, std::string a_street, std::string a_city, std::string a_state, unsigned int a_zipcode);
	Address(unsigned int a_house_number, std::string a_street, unsigned int an_apt_number, std::string a_city, std::string a_state, unsigned int a_zipcode);
	void print();
	bool comes_before(const Address& a);
	unsigned int get_house_number() const;
	unsigned int get_apt_number() const;
	unsigned int get_zipcode() const;
	std::string get_street() const;
	std::string get_city() const;
	std::string get_state() const;
	std::string get_barcode() const;
private:
	unsigned int house_number;
	unsigned int apt_number;
	unsigned int zipcode;
	bool has_apartment;
	std::string street;
	std::string city;
	std::string state;
	std::string barcode;
	std::string zipcode_to_barcode(unsigned int zcode);
};

int getCheckDigit(int x[]);

std::string getBarcode(int x[]);

#endif
