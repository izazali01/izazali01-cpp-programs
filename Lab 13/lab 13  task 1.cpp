#include <iostream>
using namespace std;

struct Person
{
    string name; // yahan naam store kiya ja raha hai
    int age; // yahan umar store ki ja rahi hai
    string address; // yahan address store kiya ja raha hai
};

int main()
{
    Person person1 = {"Izaz Ali", 21, " Malakand "}; // yahan structure ko initialize kiya gaya hai

    cout << "Name: " << person1.name << endl; // yahan name display ho raha hai
    cout << "Age: " << person1.age << endl; // yahan age display ho rahi hai
    cout << "Address: " << person1.address << endl; // yahan address display ho raha hai

    return 0;
}
