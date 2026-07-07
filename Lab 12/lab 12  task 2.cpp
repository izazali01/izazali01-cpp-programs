#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50}; 
    // yahan integer array initialize ki gayi hai

    int *ptr = numbers; 
    // yahan pointer ko array ke pehle element par set kiya gaya hai

    cout << "Array elements using pointer arithmetic:" << endl;

    cout << *ptr << endl; 
    // yahan pehla element display ho raha hai

    ptr++; 
    // pointer agle element par move ho raha hai

    cout << *ptr << endl; 
    // yahan doosra element display ho raha hai

    ptr++; 
    // pointer agle element par move ho raha hai

    cout << *ptr << endl; 
    // yahan teesra element display ho raha hai

    ptr++; 
    // pointer agle element par move ho raha hai

    cout << *ptr << endl; 
    // yahan chautha element display ho raha hai

    ptr++; 
    // pointer agle element par move ho raha hai

    cout << *ptr << endl; 
    // yahan paanchwa element display ho raha hai

    return 0; // program end hota hai
}
