#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int sum = 0;

    // user se 5 numbers input liye ja rahe hain
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // array ke tamam elements ka sum calculate kiya ja raha hai
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // sum display kiya ja raha hai
    cout << sum << endl;

    return 0;
}
