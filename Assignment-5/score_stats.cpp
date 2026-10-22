#include <iostream> // Gives us cin and cout
using namespace std; // Lets us write cout instead of std::cout

int main() { // Program starts here
    const int SIZE = 5; // The array size never changes
    int scores[SIZE]; // Holds the 5 test scores

    // Input 5 scores
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Initialize statistics
    int sum = 0; // Running total starts at 0
    int highest = scores[0]; // Start max from the first element
    int lowest = scores[0]; // Start min from the first element

    // Calculate sum, highest, and lowest
    for (int i = 0; i < SIZE; i++) {
        sum += scores[i]; // Add this score to the total

        if (scores[i] > highest) {
            highest = scores[i]; // Update the highest score
        }

        if (scores[i] < lowest) {
            lowest = scores[i]; // Update the lowest score
        }
    }

    // Calculate average
    double average = static_cast<double>(sum) / SIZE;

    // Display all scores
    cout << "Scores:";
    for (int i = 0; i < SIZE; i++) {
        cout << " " << scores[i];
    }
    cout << endl;

    // Display statistics
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;

    return 0; // Finished successfully
}
