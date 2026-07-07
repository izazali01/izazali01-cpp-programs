#include <iostream>
using namespace std;

int main() {

    // outer loop rows ke liye hai
    for (int i = 1; i <= 10; i++) {

        // inner loop columns ke liye hai
        for (int j = 1; j <= 10; j++) {

            cout << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
