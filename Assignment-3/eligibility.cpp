#include <iostream>

using namespace std;

// Name : Zerui li
// Assignment 3: Discount Eligibility

int main() { // Defines the main function, which is the entry point of the program
    int age; // Declares an integer variable named 'age' to store the user's age
    int ismember; // Declares an integer variable named 'ismember' to store whether the user is a member (1 for yes, 0 for no)

       cout << "Enter your age: "; // Prompts the user to enter their age
       cin >> age; // Reads the user's input and stores it in the 'age' variable

       cout << "Are you a member? (1 for yes, 0 for no): "; // Prompts the user to indicate if they are a member 
       cin >> ismember; // Reads the user's input and stores it in the 'ismember' variable

        if (age >= 60 || (age >= 18 && ismember == 1)) { // Checks if the user is eligible for membership benefits based on age and membership status
            cout << "You are eligible for the membership benefits." << endl; // Outputs a message indicating that the user is eligible for membership benefits
        } else { // If the user does not meet the eligibility criteria, this block executes
            cout << "You are not qualified for the discount." << endl; // Outputs a message indicating that the user is not qualified for the discount
        } // End of the if - else statement

return 0; // Returns 0 to indicate that the program has executed successfully
} // End of the main function