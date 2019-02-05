/*
 
 Homework 3_2
 Arian Owji
 604649619
 
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double get_double(string prompt) {
    double input;
    
    std::cout << prompt;
    std::cin >> input;
    
    if(cin.fail()) {
        exit(1);
    }
    
    return input;
}

int main()
{
    char response = 'y';
    
    while (response == 'y') {
        double old_salary = get_double ("Please enter your salary: ");
        double raise = get_double ("What percentage raise would you like? ");
    
        double new_salary = old_salary + (old_salary * raise * .01);
    
        std::cout << "Ok. Your new salary is " << fixed << setprecision(2) << new_salary << endl;
        std::cout << "Continue <y/n>? ";
        std::cin >> response;
    }
    
    return 0;
}
