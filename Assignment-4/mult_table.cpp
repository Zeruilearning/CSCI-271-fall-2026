#include <iostream>
using namespace std;

//Name: Zerui Li
//Assignment 4: Multiplication Table

int main() {
    int userinput;
    
    cout << "Enter a whole number to display its multiplication table: " << endl;
    cin >> userinput;

    for (int i = 1; i <= 10; i++) {
        cout << userinput << " x " << i << " = " << userinput * i << endl;
    }

    return 0;
}