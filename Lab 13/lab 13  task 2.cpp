#include <iostream>
using namespace std;

struct Student
{
    string name; // yahan student ka naam store kiya ja raha hai
    int age; // yahan student ki age store ho rahi hai
    char grade; // yahan grade store kiya ja raha hai
};

int main()
{
    Student student1 = {"izaz ", 20, 'A'}; // yahan student ko initialize kiya gaya hai

    cout << "Name: " << student1.name << endl; // yahan name display ho raha hai
    cout << "Age: " << student1.age << endl; // yahan age display ho rahi hai
    cout << "Grade: " << student1.grade << endl; // yahan grade display ho raha hai
    
    
    Student student2 = {"ali ", 21, 'B'}; // yahan student ko initialize kiya gaya hai

    cout << "Name: " << student2.name << endl; // yahan name display ho raha hai
    cout << "Age: " << student2.age << endl; // yahan age display ho rahi hai
    cout << "Grade: " << student2.grade << endl; // yahan grade display ho raha hai

    return 0;
}
