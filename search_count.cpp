#include <iostream> // Allows input and output
using namespace std; // Allows us to use cin and cout

// Name: Zerui Li
// Assignment 5: Search and Count

int main() { // Starts the main function
    const int SIZE = 10; // Sets the array size to 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Creates the required array
    int target; // Stores the number to search for
    int foundIndex = -1; // Uses -1 to mean not found
    int count = 0; // Counts how many times the target appears

    cout << "Enter a number to search for: "; // Asks for the target
    cin >> target; // Reads the target number

    for (int i = 0; i < SIZE; i++) { // Visits each array element
        if (data[i] == target) { // Checks whether the current value matches
            count++; // Increases the occurrence count

            if (foundIndex == -1) { // Checks whether this is the first match
                foundIndex = i; // Saves the first matching index
            } // Ends the first-match check
        } // Ends the matching condition
    } // Ends the search loop

    if (foundIndex != -1) { // Checks whether the target was found
        cout << target << " first found at index " << foundIndex << endl; // Prints the first index
        cout << target << " appears " << count << " time(s)" << endl; // Prints the occurrence count
    } else { // Runs when no match was found
        cout << target << " was not found." << endl; // Prints the not-found message
    } // Ends the result check

    return 0; // Ends the program
} // Ends main
