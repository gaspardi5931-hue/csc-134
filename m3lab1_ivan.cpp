// CSC 134
// M3LAB1 - Menus and Choices
// ivan
// 9/28/26

#include <iostream>
using namespace std;

// ========================================================
// 1. FUNCTION DECLARATIONS (PROTOTYPES)
// Tell the C++ compiler these functions exist before main()
// ========================================================
void attackDragon();
void fleeBattle();
void bribeDragon();

int main() {
  int choice; // menu choice

  // Display the menu
  cout << "A fierce dragon blocks the castle gate! What is your command?" << endl;
  cout << "1. Attack with broadsword" << endl;
  cout << "2. Cast an invisibility spell and flee" << endl;
  cout << "3. Bribe the dragon with 50 gold pieces" << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // Branching: test the user's choice
  if (1 == choice) {
    attackDragon();
  }
  else if (2 == choice) {
    fleeBattle();
  }
  else if (3 == choice) {
    bribeDragon();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of main()

// ========================================================
// 2. FUNCTION DEFINITIONS
// Define what each function does after main() has finished
// ========================================================
void attackDragon() {
  cout << "You chose: Attack with broadsword" << endl;
  cout << "You strike a critical blow and defeat the dragon!" << endl;
}

void fleeBattle() {
  cout << "You chose: Cast an invisibility spell and flee" << endl;
  cout << "You slip into the shadows and escape to safety." << endl;
}

void bribeDragon() {
  cout << "You chose: Bribe the dragon with 50 gold pieces" << endl;
  cout << "The dragon greedily takes your coin and lets you pass!" << endl;
}