#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;

    // User se positive integer input lo
    cout << "Enter a positive integer: ";
    cin >> num;

    // 1 se user ke number tak tamam numbers ka sum nikalo
    while(i <= num)
    {
        sum = sum + i;

        // Aglay number ki taraf barho
        i++;
    }

    // Final sum display karo
    cout << "Sum = " << sum << endl;

    return 0;
}
