#include <iostream>

using namespace std;

// Name : Zerui li
// Assignment 3: Discount Eligibility

int main() {
    int age;
    int ismember;

       cout << "Enter your age: ";
       cin >> age;

       cout << "Are you a member? (1 for yes, 0 for no): ";
       cin >> ismember;

        if (age >= 60 || (age >= 18 && ismember == 1)) {
            cout << "You are eligible for the membership benefits." << endl;
        } else {
            cout << "You are not qualified for the discount." << endl;
        }

return 0;
}