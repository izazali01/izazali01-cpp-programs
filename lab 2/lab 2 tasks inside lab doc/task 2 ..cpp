// C++ Program to Declare and Display a Floating-Point Variable pi

#include <iostream> // This is cld library od code because it take file from specific location
using namespace std; // write this to save our coding from again repetion of std fron cin and cout

int main() //programming main and starting point
{ // use to write coding between them
    float pi = 3.14;  //* Declaring a float variable and assigning value 3.14.And we use float because it use for 
    //decimal number
    // Displaying the value of pi
    cout << "Value of pi = " << pi << endl;

    // Displaying the memory size of pi
    cout << "Memory size of pi = " << sizeof(pi) << " bytes" << endl;

    // Displaying the memory address of pi
    cout << "Memory address of pi = " << &pi << endl;

    return 0; // End of program
}
