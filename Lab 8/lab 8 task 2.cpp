#include <iostream>
using namespace std;

int main() {
    // 3x3 array random values ke sath initialize ki gayi hai
    int arr[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;

    // har row ka sum calculate karna
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum = rowSum + arr[i][j];
            totalSum = totalSum + arr[i][j];
        }
        cout << "Row " << i + 1 << " ka sum: " << rowSum << endl;
    }

    // har column ka sum calculate karna
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum = colSum + arr[i][j];
        }
        cout << "Column " << j + 1 << " ka sum: " << colSum << endl;
    }

    // total sum display karna
    cout << "Total sum: " << totalSum << endl;

    return 0;
}
