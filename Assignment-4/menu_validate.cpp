#include <iostream>
using namespace std;

//Name: Zerui Li
//Assignment 4: Menu Validation

int main() { // Start of the main function, which is the entry point of the program
    int userinput;  // Variable to store the user's menu choice
    
    do {    // Start of the do-while loop to validate user input
        cout << "Enter a menu choice (1, 2, 3): " << endl;  // Prompt the user for input
        cin >> userinput;   // Read the user's input

    if ( userinput != 1 && userinput != 2 && userinput != 3) {  // Check if the input is not valid (not 1, 2, or 3)
        cout << " Invalid choice, try again. " << endl;     // Display an error message for invalid input
    }   // End of the if statement
    } while (userinput != 1 && userinput != 2 && userinput != 3);   // Continue looping until a valid input (1, 2, or 3) is received
    cout << "Your selected option " << userinput << "." << endl;    // Display the valid menu choice selected by the user

    return 0;   // Return 0 to indicate successful execution of the program
}   // End of the main function
