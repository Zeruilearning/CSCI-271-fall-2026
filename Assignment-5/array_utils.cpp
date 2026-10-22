#include <iostream> // Allows input and output
using namespace std; // Allows us to use cin and cout

// Name: Zerui Li
// Assignment 5: Array Utilities with Functions

void printForward(const int arr[], int size) { // Defines the forward printing function
    cout << "Forward: "; // Prints the forward label
    for (int i = 0; i < size; i++) { // Starts at the first element
        cout << arr[i] << " "; // Prints the current element
    } // Ends the loop
    cout << endl; // Moves to the next line
} // Ends printForward

void printReverse(const int arr[], int size) { // Defines the reverse printing function
    cout << "Reverse: "; // Prints the reverse label
    for (int i = size - 1; i >= 0; i--) { // Starts at the last element and moves backward
        cout << arr[i] << " "; // Prints the current element
    } // Ends the loop
    cout << endl; // Moves to the next line
} // Ends printReverse

int countAbove(const int arr[], int size, int limit) { // Defines the counting function
    int count = 0; // Starts the counter at 0
    for (int i = 0; i < size; i++) { // Visits every element
        if (arr[i] > limit) { // Checks whether the element exceeds the limit
            count++; // Increases the counter
        } // Ends the condition
    } // Ends the loop
    return count; // Returns the number of matching elements
} // Ends countAbove

int main() { // Starts the main function
    const int SIZE = 6; // Sets the array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Creates the required array
    int limit; // Stores the user's limit

    printForward(values, SIZE); // Calls the forward printing function
    printReverse(values, SIZE); // Calls the reverse printing function

    cout << "Count values above: "; // Asks the user for a limit
    cin >> limit; // Reads the limit

    cout << "Count: " << countAbove(values, SIZE, limit) << endl; // Prints the count

    return 0; // Ends the program
} // Ends main
