/*

Homework 6_4
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Student {
public: 
	Student(string name, string birthday);
	string getName() const;
	string getBirthdayMonth() const;
	void printStudent() const;
private:
	string studentName;
	string studentBirthday;
};

Student::Student(string name, string birthday) {
	studentName = name;
	studentBirthday = birthday;
}

string Student::getName() const {
	return studentName;
}

string Student::getBirthdayMonth() const {
	string studentBirthdayMonth = studentBirthday.substr(0, 2);
	return studentBirthdayMonth;
}

void Student::printStudent() const {
	std::cout << studentName << " " << studentBirthday << endl;
}

int main() {
	char response1 = 'y';
	char response2 = 'y';
	vector<Student> friends;

	std::cout << "Enter a list of students." << endl << endl;

	while (response1 == 'y') {
		string inputName;
		string inputBirthday;

		std::cout << "Student's name: ";
		getline(cin, inputName);
		std::cout << "Student's birthday: ";
		getline(cin, inputBirthday);
		std::cout << endl;

		friends.push_back(Student(inputName, inputBirthday));

		std::cout << "Continue <y/n>? ";
		std::cin >> response1;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl;
	}

	while (response2 == 'y') {
		string inputMonth;
		string monthNumber = "";
		bool someoneBorn = 0;

		std::cout << "Enter a month: ";
		getline(cin, inputMonth);
		std::cout << endl;

		if (inputMonth == "January") {
			monthNumber = "01";
		}
		else if (inputMonth == "February") {
			monthNumber = "02";
		}
		else if (inputMonth == "March") {
			monthNumber = "03";
		}
		else if (inputMonth == "April") {
			monthNumber = "04";
		}
		else if (inputMonth == "May") {
			monthNumber = "05";
		}
		else if (inputMonth == "June") {
			monthNumber = "06";
		}
		else if (inputMonth == "July") {
			monthNumber = "07";
		}
		else if (inputMonth == "August") {
			monthNumber = "08";
		}
		else if (inputMonth == "September") {
			monthNumber = "09";
		}
		else if (inputMonth == "October") {
			monthNumber = "10";
		}
		else if (inputMonth == "November") {
			monthNumber = "11";
		}
		else if (inputMonth == "December") {
			monthNumber = "12";
		}
		else {
			std::cout << "There is no such month. Try again.";
		}

		for (int i = 0; i < friends.size(); i++) {
			if (friends[i].getBirthdayMonth() == monthNumber) {
				someoneBorn = 1;
			}
		}

		if (someoneBorn = 0) {
			std::cout << "No students who were born in " << inputMonth << endl;
		}
		else if (someoneBorn = 1) {
			std::cout << "List of student who were born in " << inputMonth << ":" << endl;

			for (int i = 0; i < friends.size(); i++) {
				if (friends[i].getBirthdayMonth() == monthNumber) {
					friends[i].printStudent();
				}
			}
		}

		std::cout << "Continue <y/n>? ";
		std::cin >> response2;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl << endl;
	}
	return 0;
}

