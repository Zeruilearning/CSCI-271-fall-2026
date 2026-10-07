#include <iostream>
using namespace std;

//Name: Zerui Li
//Assignment 4: Multiplication Table

int main() { // To define the function, when the enter code of the function start point
    int number; // To declare such as an integer variable and named 'number' and for the user to store the input nunber
    cout << " Hi, Please enter an whole number: " << endl; //Print out the question at the terminal, and mention that user have to enter whole number
    cin >> number; // To read the user's input and output
    cout << "Multiplication table for " << number << ":" << endl; // To print out the multiplication table for the number that user input
    
    for (int i = 1; i <= 10; ++i) { // To define a for loop, which will iterate from 1 to 10, and the variable 'i' will be incremented by 1 in each iteration
        cout << number << " * " << i << " = " << number * i << endl; // To print out the multilication table for the number that user input, and the result of the multiplication will be calculated and printed out

    }// End of the for loop
return 0;// To return 0 to indicate that the program has executed succesfully
}// End of the main function
