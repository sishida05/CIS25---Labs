#include <iostream>
#include <iomanip>
using namespace std;

int main() {

char package;
double hours;

    cout << "Package: " << setw(7) << "A" << setw(7) << "B" << setw(7) << "C" << endl;
    cout << "$/Month: " << setw(9) << "9.95" << setw(8) << "14.95" << setw(7) << "19.95" << endl;
    cout << "Access Hours: " << setw(3) << "10" << setw(7) << "20" << setw(13) << "Unlimited" << endl;
    cout << "$/Additional" << "\nHours: " << setw(11) << "2.00" << setw(7) << "1.00" << setw(7) << "N/A" << endl;

    cout << "Which package would you like (A,B,C) : " << endl;
    cin >> package;

    if (package != 'A' || package != 'a' ||package != 'B' ||package != 'b' ||package != 'C' ||package != 'c') {
        cout << "Invalid Package. Please try again.";
        cout << "Which package would you like (A,B,C) : " << endl;
        cin >> package;
    }

    cout << "Please input hours used: " << endl;
    cin >> hours;

    if (hours < 0 || hours > 744) {
        cout << "Invalid Hours. Please try again.";
        cout << "Please input hours used: " << endl;
        cin >> hours;
    }

    return 0;
}