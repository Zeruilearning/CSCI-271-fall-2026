#include <iostream>
using namespace std;

// Name: Zerui Li
// Assignment 3: Even or Odd

int main() { // To define the main function, which is the entry point of the program
    int number; // To declare an integer variable named 'number' to store the user's input for the number
    cout << "Enter an integer: "; // To prompt the user to enter an integer
    cin >> number; // To read the user's input and store it in the 'number' variable

    if (number % 2 == 0) { // To check if the number is even by using the modulus operator to see if the remainder when divided by 2 is zero
        cout << number << " is even." << endl; // To output a message indicating that the number is even
    } else { // To execute the block of code if the number is not even
        cout << number << " is odd." << endl; // To output a message indicating that the number is odd
    } // End of the if - else statement
    return 0; // To return 0 to indicate that the program has executed successfully
} // End of the main function