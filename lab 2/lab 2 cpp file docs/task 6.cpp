// Include input and output library
#include <iostream>

// Allows using standard names like cout and cin
using namespace std;

// Main function where program execution starts
int main() // programme execution start from here 
{
    // Declare an integer variable to store the number
    int number;

    // Ask the user to enter an integer
    cout << "Enter an integer: "; //semicolon use for ending instruction

    // Take input from the user
    cin >> number; // >> This is cld exertion operator

    // Check if the number is positive or zero
    if (number >= 0) // >= this is use equal and greater
    {
        // Print message if the number is positive
        cout << "You entered a positive integer: " << number << endl; // endl is use for end line
    }
    else // else is use for second condition when first condition is not satisfied.
    {
        // Print message if the number is negative
        cout << "You entered a negative integer: " << number << endl;
    }

    // End the program and return value 0
    return 0;
}
