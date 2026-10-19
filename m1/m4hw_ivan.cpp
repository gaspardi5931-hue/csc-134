// CSC 134
// Ivan
// M4HW1
// 10/18/26

#include <iostream>
using namespace std;

int main()
{
    int number;
    int count = 1;

    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Check if the number is valid
    while (number < 1 || number > 12)
    {
        cout << "Invalid number. Try again: ";
        cin >> number;
    }

    // Print the multiplication table
    while (count <= 12)
    {
        cout << number << " times " << count
             << " is " << number * count << "." << endl;

        count++;
    }

    return 0;
}
