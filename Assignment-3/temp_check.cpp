#include <iostream>

using namespace std;

// Name : Zerui li
// Assignment 3: Temperature Check

int main() { // Starts the main function
    int temperature; // Declares an integer variable to store the temperature
    cout << " How's today temperature ?" << endl;  // Prompts the user to enter the temperature
    cin >> temperature;  // Reads the temperature input from the user

    if (temperature < 32) { // Checks if the temperature is below freezing
        cout << "It's freezing! Today is not a good day to go outside." << endl;    // Outputs a message indicating that it's freezing and not a good day to go outside
    } else if (temperature < 60) { // Checks if the temperature is below 60 degrees
        cout << "It's cold. It's time to dress warmly." << endl; // Outputs a message indicating that it's cold and to dress warmly
    } else if (temperature <= 75) { // Checks if the temperature is between 60 and 75 degrees
        cout << "It's mild. It's a nice day to go outside." << endl; // Outputs a message indicating that it's mild and a nice day to go outside    
    } else if (temperature > 75) { // Checks if the temperature is above 75 degrees
        cout << "It's hot outside! Don't forget to stay hydrated." << endl; // Outputs a message indicating that it's hot and to stay hydrated
    } // Ends the if-else statement
return 0; // Ends the program
} // Ends the main function
