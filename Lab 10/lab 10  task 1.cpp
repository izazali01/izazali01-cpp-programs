#include <iostream>
using namespace std;

// function jo do numbers ka product calculate karti hai
void multiply(int num1, int num2) {

    // dono numbers ka product calculate kiya ja raha hai
    int result = num1 * num2;

    // result display kiya ja raha hai
    cout << "Product: " << result << endl;
}

int main() {

    int a, b;

    // user se do numbers input liye ja rahe hain
    cin >> a >> b;

    // function ko call kiya ja raha hai
    multiply(a, b);

    return 0;
}
