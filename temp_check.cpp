#include <iostream>

using namespace std;

int main() {
    int temperature;
    cout << " How's today temperature(f) ?" << endl;
    cin >> temperature;

    if (temperature < 32) {
        cout << "It's freezing! Today is not a good day to go outside." << endl;
    } else if (temperature >= 32 && temperature < 59) {
        cout << "It's cold. It's time to dress warmly." << endl;
    } else if (temperature >= 60 && temperature < 69) {
        cout << "It's mild, It's a nice day to go outside, dress what you like."<< endl;
    } else if (temperature >= 70 && temperature < 76) {
        cout << "It's hot outside! Don't forget to stay hydrated." << endl;

    } else if (temperature >= 77 && temperature < 82) {
        cout << "It's very hot outside! Make sure to wear sunscreen and stay cool." << endl;
    } else {
        cout << "It's extremely hot outside!" "Be careful and avoid prolonged exposure to the sun." << endl;
    }
return 0;
}
