#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string message = "Welcome to C++ Programming";

    // yahan message ko screen par display kiya ja raha hai
    cout << "Message: " << message << endl;

    // yahan string ki total length nikal kar display ki ja rahi hai
    cout << "Length of string: " << message.length() << endl;

    // yahan string ko uppercase mein convert karne ki example (string functions ka use)
    for (int i = 0; i < message.length(); i++) 
    {
        message[i] = toupper(message[i]);
    }

    // uppercase string display ki ja rahi hai
    cout << "Uppercase Message: " << message << endl;

    return 0;
}
