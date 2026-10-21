/*
CSC 134
M5T2
Wtih a patner , write a C++ program that prints 1 to 10 and their suqares using one value-returning function and one void function
*/

#include <iostream>
using namespace std;

// Prototypes : declare functions here , define them under main.
int square(int num);                            // Does the math
void printAnswerLine(int number, int squared);  // prints a full line of the table



int main()
{
    cout << "Table of Squares Program" << endl;
    for (int i =1; i<=10; i++)
    {
        int result = square(i);
        printAnswerLine(i,result);
    }
    return 0;
}

// Define functions here.
int square(int num)
{
   return num * num;

}

// Void function
void printAnswerLine(int number , int squared)
{
     cout << number << " squared is " << squared << endl;
}
