#include <iostream> // Allows input and output
using namespace std; // Allows us to use cin and cout

//Name: Zerui Li
//Assignment 4: Multiplication Table

int main() { // Start of the main function, which is the entry point of the program
    int userinput; // Variable to store the user's input
    
    cout << "Enter a whole number to display its multiplication table: " << endl; // Prompt the user for input
    cin >> userinput; // Read the user's input

    for (int i = 1; i <= 10; i++) { // Loop from 1 to 10 to generate the multiplication table
        cout << userinput << " x " << i << " = " << userinput * i << endl; // Display the multiplication result for each iteration
    } // End of the loop

    return 0; // Return 0 to indicate successful execution of the program
} // End of the main function