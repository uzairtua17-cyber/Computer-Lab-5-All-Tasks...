// Uzair Amjad
//L1F26BSCS0104
#include <iostream>
using namespace std;

int main() {
    int billAmount;

    cout << "Enter bill amount: ";
    cin >> billAmount;

    cout << "Bill amount: Rs. " << billAmount << endl;

    if (billAmount >= 5000) {
        cout << "You qualify for a discount." << endl;
    }


    return 0;
}