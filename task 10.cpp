// Uzair Amjad
//L1F26BSCS0104

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 85) {
        cout << "Scholarship awarded" << endl;
    }
    else {
        cout << "Scholarship not awarded" << endl;
    }

    return 0;
}