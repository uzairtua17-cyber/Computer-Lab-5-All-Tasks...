// Uzair Amjad
//L1F26BSCS0104

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even number" << endl;
    }
    else {
        cout << "Odd number" << endl;
    }

    // Zero is an even number.
    return 0;
}