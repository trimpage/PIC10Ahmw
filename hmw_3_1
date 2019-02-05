/*
 
 Homework 3_1
 Arian Owji
 604649619
 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double future_balance (double init_balance, double rate, double year) {
    double future_balance = init_balance * pow((1 + (rate * .01)), year);
    
    return future_balance;
}

int main()
{
    double init_balance;
    double rate;

    std::cout << "Enter the initial balance: ";
    std::cin >> init_balance;
    std::cout << "Enter the interest rate in percent: ";
    std::cin >> rate;
    std::cout << endl;
    
    std::cout << "After 10 years, the balance is $" << fixed << setprecision(2) << future_balance (init_balance, rate, 10) << endl;
    std::cout << "After 20 years, the balance is $" << fixed << setprecision(2) << future_balance (init_balance, rate, 20) << endl;
    std::cout << "After 30 years, the balance is $" << fixed << setprecision(2) << future_balance (init_balance, rate, 30) << endl << endl;
    
    return 0;
}
