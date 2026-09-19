/*
CSC 134
M2HW1 - Homework (4 questions max)
ivan
9/16/26
HOW TO USE:
- Fill in the functions for any question you answer
- uncomment those functions in main, so they run.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// COVERED in module 5, here's the basics
// List extra functions above main
// Write the full version below main
void question1();
void question2();
void question3();
void question4();



int main() {
    // Run only the questions you finish by removing the // 
    question1();
    //question2();
    //question3();
    //question4();
}

void question1() {
    string name;
double startingBalance;
double deposit;
double withdrawal;
double finalBalance;
int accountNumber = 1234;

cout << "Enter your name: ";
getline(cin,name);

cout << "Enter starting account balance: $";
cin >> startingBalance;

cout << "Enter deposit amount: $";
cin >> deposit;

cout << "Enter withdrawal amount: $";
cin >> withdrawal;

finalBalance = startingBalance + deposit - withdrawal;

cout << fixed << setprecision(2);

cout << "Name on account: " << name << endl;
cout << "Account number: " << accountNumber << endl;
cout << "Final account balance: $" << finalBalance << endl;
}

void question2() {
    cout << "Question 2 goes here" << endl;
}

void question3() {
    cout << "Question 3 goes here" << endl;
}

void question4() {
    cout << "Question 4 goes here" << endl;
}