#include <iostream>
using namespace std;

// function jo array ke tamam elements ka sum calculate karti hai
// array aur uska size parameter ke tor par liya gaya hai
int calculateSum(int arr[], int size) {

    int sum = 0;

    // array ke tamam elements ko add kiya ja raha hai
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {

    int arr[10];

    // user se 10 integer values input li ja rahi hain
    for (int i = 0; i < 10; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // sum calculate karne ke liye function call kiya ja raha hai
    int sum = calculateSum(arr, 10);

    // average calculate ki ja rahi hai
    double average = sum / 10.0;

    // result display kiya ja raha hai
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
