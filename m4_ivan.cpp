/*
CSC 134
M4 EXEMPLE
IVAN
10/5/26
PRACTICE
*/
#include <iostream>
using namespace std;

int main() {
    // infinite loop
    bool done = true;
    while(done == false) {
        cout << "still going..." ;
    }

    // counting loop
    int count = 1;
    while (count < 6) {
        cout << "count is: " << count << endl;
        count++; // incrememt AFTER showing the number
    } 
    
    // Validation loop
    // Test - number must be between 1 and 5
    bool is_valid = false;
    int number;
    while (false == is_valid ) {
        cout << " Ener a number from 1-5: ";
        cin >> number;
        if (number < 1) {
            cout << "Too low!" << endl;
        }
        else if (number > 5) {
            cout << "Too high!" << endl;
        }
        else {
            cout << " You entered:" << number << endl;
            is_valid = true; // we're done , stops on next loops 
        }
    }

    return 0;
}