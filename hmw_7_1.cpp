/*

Homework 7_1
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Person {
public:
	Person(string aName) {
		name = aName;
		bestFriend = nullptr;
		counter = 0;
	}
	void setBestFriend(Person* aBestFriend);
	void printPerson() const;
	string getName() const;

private:
	string name;
	Person* bestFriend;
	int counter;
};

void Person::setBestFriend(Person* aBestFriend) {
	bestFriend = aBestFriend;
	aBestFriend->counter += 1;
}

void Person::printPerson() const {
	if (bestFriend != nullptr) {
		std::cout << name << " | " << bestFriend->getName() << " | " << counter << endl;
	}
	else {
		std::cout << name << " | " << "NONE" << " | " << counter << endl;
	}
}

string Person::getName() const {
	return name;
}

int main() {
	char response = 'y';
	vector<Person*> people;

	while (response == 'y') {
		string inputName;

		std::cout << "Name: ";
		getline(cin, inputName);

		Person* newPerson = new Person(inputName);

		people.push_back(newPerson);

		//delete newPerson; If not commented this line would cause a crash, although I thought we were supposed to delete?
		//Is the new class member not stored in the vector already so we are free to delete the memory?

		std::cout << endl;
		std::cout << "Continue <y/n>? ";
		std::cin >> response;
		cin.clear();
		cin.ignore(1000, '\n');
		std::cout << endl;
	}

	std::cout << "Enter the name of best friends: " << endl << endl;

	for (int i = 0; i < people.size(); i++) {
		string friendName;

		std::cout << "Best friend of " << people[i]->getName() << ": ";
		getline(cin, friendName);

		for (int j = 0; j < people.size(); j++) {
			if (people[j]->getName() == friendName) {
				people[i]->setBestFriend(people[j]);
			}
		}
	}

	std::cout << endl << "Information:" << endl;

	for (int i = 0; i < people.size(); i++) {
		people[i]->printPerson();
	}

	return 0;
}