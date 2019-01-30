/*

Homework 2_1
Arian Owji
604649619

*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int max = -2147483647;
    int min = 2147483647;
    int x;
    char response = 'y';
    
    while (response == 'y') {
        std::cout << "Enter a list of integers: ";

        string line;
        getline(std::cin, line);
        stringstream ss(line);
        
        while (!ss.eof()) {
            ss >> x;
            
            if (x > max) {
                max = x;
            }
            if (x < min) {
                min = x;
            }
        }
        
        std::cout << "minimum integer in the list is " << min << endl;
        std::cout << "maximum integer in the list is " << max << endl << endl;
        
        std::cout << "Continue? <y/n> ";
        std::cin >> response;
        std::cout << endl;
        std::cin.get();
    }
    
    return 0;
}
