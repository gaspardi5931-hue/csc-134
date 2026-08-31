// CSC 134
/*
M1HW - Movie talk
Ivan
8/31/26
Example : Tlk about Shrek
*/

#include <iostream>
using namespace std;

// Starting point
int main() {

    // Purpose : practice using string, int, and double within natural text.
    // Declare varibles
    string movie_name;    // Film Title as in IMDB
    int movie_year;       // year of release
    double movie_grossm; // millions of USD of the gross

    // Example : The Amazing spider-man 
    movie_name = "the Amazing spider-man";
    movie_year = 2017;
    movie_grossm = 758.8; // almost a billion , internationally
    
    // Print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_grossm << "million."<< endl;
    
    // Print a movie quote
    cout <<"QUOTE:" << endl << " \t\"Secret have a cost.They are not for free.\" " << endl;

    return 0; // no errors
}
