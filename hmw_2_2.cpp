//
//  hmw_2_2.cpp
//  
//
//  Created by Arian Owji on 1/24/19.
//

#include <iostream>

using namespace std;

int main()
{
    int x;
    char response = 'y';
    
    while (response == 'y') {
        std::cout << "Enter a list of total scores: ";
        
        while (std::cin >> x) {
            if ((x >= 90) && (x <= 100)) {
                std::cout << "   " << x << " -> A" << endl;
            } else if ((x >= 87) && (x < 90)) {
                std::cout << "   " << x << " -> A-" << endl;
            } else if ((x >= 83) && (x < 87)) {
                std::cout << "   " << x << " -> B+" << endl;
            } else if ((x >= 80) && (x < 83)) {
                std::cout << "   " << x << " -> B" << endl;
            } else if ((x >= 77) && (x < 80)) {
                std::cout << "   " << x << " -> B-" << endl;
            } else if ((x >= 73) && (x < 77)) {
                std::cout << "   " << x << " -> C+" << endl;
            } else if ((x >= 70) && (x < 73)) {
                std::cout << "   " << x << " -> C" << endl;
            } else if ((x >= 67) && (x < 70)) {
                std::cout << "   " << x << " -> C-" << endl;
            } else if ((x >= 63) && (x < 67)) {
                std::cout << "   " << x << " -> D+" << endl;
            } else if ((x >= 60) && (x < 63)) {
                std::cout << "   " << x << " -> D" << endl;
            } else if ((x >= 57) && (x < 60)) {
                std::cout << "   " << x << " -> D-" << endl;
            } else if ((x >= 0) && (x < 57)) {
                std::cout << "   " << x << " -> F" << endl;
            }
        }
        std::cout << endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Continue? <y/n> ";
        std::cin >> response;
        std::cout << endl;
    }
    return 0;
}
