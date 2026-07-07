#include <iostream>
using namespace std;

int main() {
    // 4x4 array random values ke sath initialize ki gayi hai
    int arr[4][4] = {
        {10, 23, 5, 17},
        {9, 45, 12, 8},
        {33, 2, 19, 27},
        {6, 14, 50, 11}
    };

    // pehle element ko maximum assume kiya gaya hai
    int maxValue = arr[0][0];

    // maximum value find karna nested loop se
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];
            }
        }
    }

    // maximum value display karna
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
