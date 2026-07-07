#include <iostream>
using namespace std;

int main() {

    // source aur destination arrays declare ki ja rahi hain
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // loop ke zariye source array ko destination array me copy kiya ja raha hai
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // source array display ki ja rahi hai
    for (int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    // destination array display ki ja rahi hai
    for (int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
