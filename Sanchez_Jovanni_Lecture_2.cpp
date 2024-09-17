// Jovanni Sanchez
// Lecture 2
// September 16, 2024

#include <iostream>
#include <string>
using namespace std;

int main(){
    /* Outputting variables */

    int wholeNum = 24;                     // Intenger (Whole Number)
    float floatingNum = 0.5;              // Floating point number
    double doubleTrouble = 66.6;         // Floating point number (But BIGGER)
    char singleLetter = 'A';            // Character
    bool trueOrFalse = true;           // Boolean
    string myFinalWords = "WOW! :O";  // String

    cout << "int: "    << wholeNum      << "\n";
    cout << "float: "  << floatingNum   << "\n";
    cout << "double: " << doubleTrouble << "\n";
    cout << "char: "   << singleLetter  << "\n";
    cout << "bool: "   << trueOrFalse   << "\n";
    cout << "string: " << myFinalWords  << "\n";

    /* Arithmetic Operators (From Slide 37) */

    int inches = 100;

    cout << inches      << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;

    /* Comparing ASCII characters */

    char letterZ = 'Z';

    cout << letterZ << " > " << singleLetter << "\n";

    /* Evaluating mixed equations */

    cout << "2 + 3.5 = " << 2 + 3.5 << "\n";
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << "\n";
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << "\n";

    return 0;
}