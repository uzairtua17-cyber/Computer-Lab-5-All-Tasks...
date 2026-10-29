// Uzair Amjad
//L1F26BSCS0104

#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter monthly units: ";
    cin >> units;

    if (units <= 100) {
        cout << "Usage category: Low usage" << endl;
    }
    else if (units <= 300) {
        cout << "Usage category: Medium usage" << endl;
    }
    else {
        cout << "Usage category: High usage" << endl;
    }

    return 0;
}