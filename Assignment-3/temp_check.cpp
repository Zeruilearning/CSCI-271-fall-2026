#include <iostream>

using namespace std;

// Name : Zerui li
// Assignment 3: Temperature Check

int main() {
    int temperature;
    cout << " How's today temperature ?" << endl;
    cin >> temperature;

    if (temperature < 32) {
        cout << "It's freezing! Today is not a good day to go outside." << endl;
    } else if (temperature < 60) {
        cout << "It's cold. It's time to dress warmly." << endl;
    } else if (temperature <= 75) {
        cout << "It's mild. It's a nice day to go outside." << endl;
    } else {
        cout << "It's hot outside! Don't forget to stay hydrated." << endl;
    }
return 0;
}
