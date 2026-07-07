#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string firstName = "Izaz";
    string lastName = "Ali";

    // yahan first name ko store kiya ja raha hai

    // yahan last name ko store kiya ja raha hai

    // yahan dono strings ko jor kar full name banaya ja raha hai
    string fullName = firstName + " " + lastName;

    // yahan full name ko screen par display kiya ja raha hai
    cout << "Full Name: " << fullName << endl;

    return 0;
}
