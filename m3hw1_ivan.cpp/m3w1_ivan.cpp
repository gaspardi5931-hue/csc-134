// CSC 134
// M3HW1 
// Ivan G.
// 10/03/2026

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Function prototypes (declarations)
// These tell the program what functions we will use
// The code for each question will be written below main
void question1();
void question2();
void question3();
void question4();

// Main menu
int main() {
    cout << "M3HW1 - Gold" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "0. Exit" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        question1();
    }
    else if (choice == 2) {
        question2();
    }
    else if (choice == 3) {
        question3();
    }
    else if (choice == 4) {
        question4();
    }
    else if (choice == 0) {
        cout << "Bye!" << endl;
    }
    else {
        cout << "Not a valid choice." << endl;
    }

    return 0;
}

// Question 1
void question1() {
    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure, that's OK." << endl;
    }
}


// Question 2
void question2() {
    double mealPrice;
    double tax;
    double tip = 0;
    double total;
    int orderType;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> orderType;

    tax = mealPrice * 0.08;

    if (orderType == 1) {
        tip = mealPrice * 0.15;
    }

    total = mealPrice + tax + tip;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "----- Receipt -----" << endl;
    cout << "Meal price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;
}

// Question 3
void question3() {
    int firstChoice;
    int secondChoice;

    cout << "You are playing in the championship game." << endl;
    cout << "The score is tied and you have the ball." << endl;
    cout << "Enter 1 to shoot or 2 to pass: ";
    cin >> firstChoice;

    if (firstChoice == 1) {
        cout << "The goalkeeper saves your shot. Game over!" << endl;
    }
    else if (firstChoice == 2) {
        cout << "Your teammate passes the ball back to you." << endl;
        cout << "Enter 1 to shoot or 2 to pass again: ";
        cin >> secondChoice;

        if (secondChoice == 1) {
            cout << "GOAL! You score the winning goal. You win!" << endl;
        }
        else if (secondChoice == 2) {
            cout << "The other team steals the ball. You lose!" << endl;
        }
        else {
            cout << "Not a valid choice." << endl;
        }
    }
    else {
        cout << "Not a valid choice." << endl;
    }
}

// Question 4
void question4() {
    srand(time(0));

    int number1 = rand() % 10;
    int number2 = rand() % 10;
    int userAnswer;
    int correctAnswer;

    correctAnswer = number1 + number2;

    cout << "What is " << number1 << " plus " << number2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
        cout << "The correct answer is " << correctAnswer << "." << endl;
    }
}

