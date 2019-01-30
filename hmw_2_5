/*
 
 Homework 2_5
 Arian Owji
 604649619
 
 */

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    char response = 'y';
    double a;
    double b;
    unsigned int n;
    
    while (response == 'y') {
        std::cout << "Enter the interval boundaries [a,b]: ";
        
        string line;
        getline(cin, line);
        stringstream ss(line);
        
        ss >> a >> b;
        
        std::cout << "Enter a number of subintervals: ";
        std::cin >> n;
        
        double h = (b - a) / n;
        double integral = ((pow(b,3) + pow(b,5)) - (pow(a,3) + pow(a,5)));
        double approximateIntegral = 0;
        
        for (int i = 1; i < (n + 1); i++) {
            approximateIntegral += (((a + (i * h)) - (a + ((i - 1) * h))) * ((3 * pow((a + ((i - 1) * h)),2)) + (5 * pow((a + ((i - 1) * h)),4))));
        }
        
        double error = abs (approximateIntegral - integral);
        
        std::cout << "n = " << n << ", area is approximately = " << fixed << setprecision(6) << approximateIntegral << ", error = " << error << endl;

        std::cout << endl;
        std::cout << "Continue? <y/n> ";
        std::cin >> response;
        std::cout << endl;
        std::cin.get();
    }
    return 0;
}
