/*
 
 Homework 2_6
 Arian Owji
 604649619
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char response = 'y';
    unsigned int x;
    
    while (response == 'y') {
        std::cout << "Enter a positive integer <unsigned int>: ";
        std::cin >> x;
        std::cout << endl;
        
        int a = 0;
        int n = 8 * sizeof(x);
        
        for (int i = (n - 1); i >= 0; i--) {
            a += (x / static_cast<int>(pow(2, i)));
    
            
            std::cout << a;
        }

        std::cout << endl << endl;
        std::cout << "Continue? <y/n> ";
        std::cin >> response;
        std::cout << endl;
        std::cin.get();
    }
    return 0;
}
