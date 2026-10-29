// Uzair Amjad
//L1F26BSCS0104

#include <iostream>
using namespace std;

int main() {
    int visitorAge;

    cout << "Enter visitor age: ";
    cin >> visitorAge;

    if (visitorAge < 0) {
        cout << "Invalid age" << endl;
    }
    else if (visitorAge < 5) {
        cout << "Free entry" << endl;
    }
    else if (visitorAge <= 17) {
        cout << "Child/Student ticket: Rs. 200" << endl;
    }
    else if (visitorAge <= 59) {
        cout << "Adult ticket: Rs. 500" << endl;
    }
    else {
        cout << "Senior ticket: Rs. 300" << endl;
    }

    return 0;
}