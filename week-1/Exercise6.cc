// Exercise 6
// Write a program to determine whether an unsigned integral value is odd or even

#include <iostream>
using namespace std;

int main()
{
    size_t value;						 // declare integral value
    int expression;						 // declare expression
    cout << "Please enter an unsigned integral value: " << '\n'; // ask user for value
    cin >> value;						 // let user input value
    expression = value % 2;					 // determine remainder value
    cout << (expression ? "odd" : "even") << '\n';		 // tell user remainder odd/even
} 

