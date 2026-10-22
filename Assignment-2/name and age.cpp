#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "What is your name? ";
    cin >> name;

    cout << "What is your age? ";
    cin >> age;

    cout << "Hello, I am " << name << "! I am "
         << age << " years old." << endl;

    return 0;
}
