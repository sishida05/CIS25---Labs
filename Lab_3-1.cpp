#include <iostream>
#include <iomanip>
using namespace std;

void InternetBill() {
    char package;
    double hours;
    double bill;
    
    cout << "Pleaes select a package: " << endl;
    cin >> package;

    if (package == 'A' || package == 'a' || package == 'B' || package == 'b' || package == 'C' || package == 'c') {
    
        cout << "Please input hours used: " << endl;
        cin >> hours;
    
        if (hours < 0 || hours > 744) {
            cout << "\nInvalid Hours.\nPlease keep hours between 0-744." << endl;
            InternetBill();
    
        } else {
            if (package == 'A' || package == 'a') {
                if (hours > 10) {
                    bill = hours - 10;
                }
            bill = bill + 9.95;
            cout << "Your total amount due is: $" << bill << endl;
    
        } else if (package == 'B' || package == 'b') {
            if (hours > 20) {
                bill = hours - 20;
            }
            bill = bill + 14.95;
            cout << "Your total amount due is: $" << bill << endl;
    
        } else if (package == 'C' || package == 'c') {
            cout << "Your total amount due is: $19.95" << endl;
            }
        }
    } else {
        cout << "\nInvalid Package.\nPlease select A, B, or C." << endl;
        InternetBill();
    }
}

int main() {

    cout << "Package: " << setw(7) << "A" << setw(7) << "B" << setw(7) << "C" << endl;
    cout << "$/Month: " << setw(9) << "9.95" << setw(8) << "14.95" << setw(7) << "19.95" << endl;
    cout << "Access Hours: " << setw(3) << "10" << setw(7) << "20" << setw(13) << "Unlimited" << endl;
    cout << "$/Additional" << "\nHours: " << setw(11) << "2.00" << setw(7) << "1.00" << setw(7) << "N/A" << endl;

    InternetBill();

    return 0;
}