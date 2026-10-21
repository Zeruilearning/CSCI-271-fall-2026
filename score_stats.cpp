#include <iostream> // Allows input and output
using namespace std; // Allows us to use cin and cout

// Name: Zerui Li
// Assignment 5: Score Statistics

int main() { // Starts the main function
    const int SIZE = 5; // Sets the array size to 5
    int scores[SIZE]; // Creates an array for 5 scores
    int sum = 0; // Initializes the sum to 0
    int highest; // Declares the highest score variable
    int lowest; // Declares the lowest score variable
    double average; // Declares the average variable

    for (int i = 0; i < SIZE; i++) { // Repeats 5 times
        cout << "Enter score " << i + 1 << ": "; // Asks for a score
        cin >> scores[i]; // Stores the score in the array
    } // Ends the input loop

    highest = scores[0]; // Starts highest from the first score
    lowest = scores[0]; // Starts lowest from the first score

    for (int i = 0; i < SIZE; i++) { // Visits every score
        sum += scores[i]; // Adds the current score to the sum

        if (scores[i] > highest) { // Checks for a higher score
            highest = scores[i]; // Updates the highest score
        } // Ends the highest comparison

        if (scores[i] < lowest) { // Checks for a lower score
            lowest = scores[i]; // Updates the lowest score
        } // Ends the lowest comparison
    } // Ends the statistics loop

    average = static_cast<double>(sum) / SIZE; // Calculates the average

    cout << "Scores: "; // Prints the scores label
    for (int i = 0; i < SIZE; i++) { // Visits every score
        cout << scores[i] << " "; // Prints each score on one line
    } // Ends the printing loop

    cout << endl; // Moves to the next line
    cout << "Sum: " << sum << endl; // Prints the sum
    cout << "Average: " << average << endl; // Prints the average
    cout << "Highest: " << highest << endl; // Prints the highest score
    cout << "Lowest: " << lowest << endl; // Prints the lowest score

    return 0; // Ends the program
} // Ends main
