#include <iostream>
using namespace std;

int main()
{
    int num = 10; // yahan integer variable initialize kiya gaya hai

    int *ptr; // yahan integer pointer declare kiya gaya hai

    ptr = &num; // yahan pointer ko num ke address par point karwaya gaya hai

    cout << "Value of num: " << num << endl; 
    // yahan num ki value display ki ja rahi hai

    cout << "Value using pointer: " << *ptr << endl; 
    // yahan pointer ko dereference karke value display ki ja rahi hai

    return 0; // program yahan end hota hai
}
