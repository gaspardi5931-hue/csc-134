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
   question2();
    question3();
    question4();
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
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length;
    double width;
    double height;
    double volume;
    double crate_cost;
    double crate_charge;
    double profit;

    cout << "Please enter the crate dimensions:" << endl;

    cout << "Crate length: ";
    cin >> length;

    cout << "Crate width: ";
    cin >> width;

    cout << "Crate height: ";
    cin >> height;

    volume = length * width * height;

    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    profit = crate_charge - crate_cost;

    cout << fixed << setprecision(2);

    cout << "A crate measuring " << length << " x "
         << width << " x " << height << " ft." << endl;

    cout << "Its volume: " << volume << " cubic ft." << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for: $" << crate_charge << endl;
    cout << "Profit: $" << profit << endl;
}



void question3() {
     int pizzas;
    int slicesPerPizza;
    int visitors;
    int totalSlices;
    int slicesEaten;
    int leftoverSlices;

    cout << "Enter number of pizzas: ";
    cin >> pizzas;

    cout << "Enter slices per pizza: ";
    cin >> slicesPerPizza;

    cout << "Enter number of visitors: ";
    cin >> visitors;

    totalSlices = pizzas * slicesPerPizza;
    slicesEaten = visitors * 3;
    leftoverSlices = totalSlices - slicesEaten;

    cout << "Leftover slices: " << leftoverSlices << endl;
}


void question4() {
   
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne;
    string cheerTwo;

    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

}