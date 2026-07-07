#include <iostream>
using namespace std;

int main() {

    int rows;

    // rows ki input li ja rahi hai
    cin >> rows;

    // triangle pattern print kiya ja raha hai
    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
