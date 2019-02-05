/*
 
 Homework 3_3
 Arian Owji
 604649619
 
 */

#include <iostream>
#include <string>

using namespace std;

bool leap_year (int year) {
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    char response = 'y';
    
    while (response == 'y') {
        
        int year;
    
        std::cout << "Please enter a year: ";
        std::cin >> year;
        
        if (leap_year(year) == 1) {
            std::cout << year << " is a leap year." << endl;
        } else {
            std::cout << year << " is not a leap year." << endl;
        }
        
        std::cout << "Continue <y/n>? ";
        std::cin >> response;
        std::cout << endl;
    }
    return 0;
}
