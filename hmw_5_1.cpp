/*

Homework 5_1
Arian Owji
604649619

*/

#include <iostream>
#include <string>

using namespace std;

class Person {
public: 
	Person();
	Person(string pname, int page);
	string get_name() const;
	int get_age() const;
private:
	string name;
	int age; // 0 if unknown
};

Person::Person():name(""), age(0) {}

Person::Person(string pname, int page) {
	name = pname;
	age = page;
}

string Person::get_name() const {
	return name;
}

int Person::get_age() const {
	return age;
}

class PEmployee {
public: 
	PEmployee();
	PEmployee(string employee_name, int employee_age, double initial_salary);
	void set_salary(double new_salary);
	double get_salary() const;
	string get_name() const;
	int get_age() const;
	void print() const;
private:
	Person person_data;
	double salary;
};

PEmployee::PEmployee() {
	person_data = Person();
	salary = 0;
}

PEmployee::PEmployee(string employee_name, int employee_age, double initial_salary) {
	person_data = Person(employee_name, employee_age);
	salary = initial_salary;
}

void PEmployee::set_salary(double new_salary) {
	salary = new_salary;
}

double PEmployee::get_salary() const {
	return salary;
}

string PEmployee::get_name() const {
	return person_data.get_name();
}

int PEmployee::get_age() const {
	return person_data.get_age();
}

void PEmployee::print() const {
	std::cout << "Employee information print out:" << endl;
	std::cout << PEmployee::get_name() << endl << PEmployee::get_age() << " years old" << endl <<
		"Salary = $" << PEmployee::get_salary() << endl << endl;
}

void incorrect_input() {
	std::cout << "Incorrect input. Exit!" << endl;
	system("pause");
	exit(0);
}

int main() 
{
	char response = 'y';

	while (response == 'y') {
		string input_name;
		int input_age;
		double input_salary;

		std::cout << "Enter information on the employee." << endl;
		std::cout << "Enter the name: ";
		getline(cin, input_name);
		std::cout << "Enter the age: ";
		std::cin >> input_age;

		if (cin.fail()) { 
			incorrect_input();
		}

		std::cout << "Enter the salary: ";
		std::cin >> input_salary;

		if (cin.fail()) {
			incorrect_input();
		}

		std::cout << endl;

		PEmployee employee(input_name, input_age, input_salary);

		employee.print();
		
		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		std::cout << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return 0;
}
