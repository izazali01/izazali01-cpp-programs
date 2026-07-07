#include <iostream>
using namespace std;

// function jo number ka square return karti hai
int getSquare(int number) {

    // square calculate kiya ja raha hai
    int result = number * number;

    // result return kiya ja raha hai
    return result;
}

int main() {

    int num;

    // user se number input liya ja raha hai
    cin >> num;

    // function call karke square hasil kiya ja raha hai
    int square = getSquare(num);

    // result display kiya ja raha hai
    cout << "Square: " << square << endl;

    return 0;
}
