/*

Homework 5_2
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Car {
public:
	Car(double car_fuel_efficiency);
	double get_gas() const;
	double get_fuel_efficiency() const;
	double drive(double miles);
	void add_gas(double added_gas);
private:
	double fuel_efficiency; //miles per gallon
	double gas = 0; //gallons
};

Car::Car(double car_fuel_efficiency) {
	fuel_efficiency = car_fuel_efficiency;
}

double Car::get_gas() const {
	return gas;
}

double Car::get_fuel_efficiency() const {
	return fuel_efficiency;
}

double Car::drive(double miles) {
	gas -= miles / fuel_efficiency;
	
	if (gas < 0) {
		miles = fabs(gas) * fuel_efficiency;
	}
	return miles;
}

void Car::add_gas(double added_gas) {
	gas += added_gas;
}

void incorrect_input_test(double input) {
	if ((cin.fail()) || input < 0) {
		std::cout << "Incorrect input. Exit!" << endl << endl;
		system("pause");
		exit(0);
	}
}

int main() 
{
	char response = 'y';
	double input_efficiency;

	std::cout << "Enter the car's fuel efficiency: ";
	std::cin >> input_efficiency;

	incorrect_input_test(input_efficiency);

	Car car(input_efficiency);

	while (response == 'y') {
		double input_gas;
		double input_drive_miles;
		double remaining_miles;

		std::cout << endl << "Gas to add <gallons>: ";
		std::cin >> input_gas;

		incorrect_input_test(input_gas);

		std::cout << "Miles to drive: ";
		std::cin >> input_drive_miles;

		incorrect_input_test(input_drive_miles);

		car.add_gas(input_gas);

		remaining_miles = car.drive(input_drive_miles);

		if (car.get_gas() >= 0) {
			std::cout << "Done! Fuel remains: " << car.get_gas() << endl;
		}
		else {
			std::cout << "We ran out of fuel! " << remaining_miles << " miles remain." << endl;
			car.add_gas(fabs(car.get_gas()));
		}

		std::cout << "Continue? <y/n> ";
		std::cin >> response;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return 0;
}
