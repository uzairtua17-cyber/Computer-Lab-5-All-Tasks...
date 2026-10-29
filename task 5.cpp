// Uzair Amjad
//L1F26BSCS0104

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber) {
        cout << "First number is greater" << endl;
    }
    else {
        cout << "First number is not greater" << endl;
    }

    // Equal numbers make the condition false.
    return 0;
}