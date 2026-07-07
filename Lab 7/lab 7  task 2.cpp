#include <iostream>
using namespace std;

int main() {

    // message array declare ki ja rahi hai
    char message[] = "Hello";

    // loop ke zariye har character ko separate line par display kiya ja raha hai
    for (int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

    return 0;
}
