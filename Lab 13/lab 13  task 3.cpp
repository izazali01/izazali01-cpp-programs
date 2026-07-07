#include <iostream>
using namespace std;

struct Book
{
    string title; // yahan book ka title store kiya ja raha hai
    string author; // yahan author ka naam store ho raha hai
    float price; // yahan price store ki ja rahi hai
    int pages; // yahan pages ki value store ho rahi hai
};

int main()
{
    Book book1 = {"C++ Programming", "Bjarne Stroustrup", 600.5, 350}; // yahan book1 initialize ki gayi hai
    Book book2 = {"Data Structures", "Mark Allen Weiss", 750.0, 500}; // yahan book2 initialize ki gayi hai

    cout << "Book 1 Details:" << endl;
    cout << book1.title << endl; // yahan title display ho raha hai
    cout << book1.author << endl; // yahan author display ho raha hai
    cout << book1.price << endl; // yahan price display ho rahi hai
    cout << book1.pages << endl; // yahan pages display ho rahe hain

    cout << endl;

    cout << "Book 2 Details:" << endl;
    cout << book2.title << endl; // yahan title display ho raha hai
    cout << book2.author << endl; // yahan author display ho raha hai
    cout << book2.price << endl; // yahan price display ho rahi hai
    cout << book2.pages << endl; // yahan pages display ho rahe hain

    return 0;
}
