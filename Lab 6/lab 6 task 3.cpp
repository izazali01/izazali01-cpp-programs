#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    // user se number input liya ja raha hai
    cin >> n;

    // 1 se n tak numbers ka sum calculate kiya ja raha hai
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // result display kiya ja raha hai
    cout << sum << endl;

    return 0;
}
