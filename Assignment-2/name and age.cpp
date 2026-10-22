#include <iostream>

using namespace std;

int main() {
    char name[20];
    int age;

    cout << "Welcome to CSCI Assignment 2" << endl;
    cout << "Please provide your name: ";
    cin >> name;

    cout << "Please provide me your age: " << endl;
    cin >> age;

    cout << "Hey " << name << ", you are "
         << age << " years old." << endl;

    cout << "Thank you for using CSCI Assignment 2 " << name << "! I hope you have a wonderful day!" << endl;

    return 0;
}