#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Package: " << setw(7) << "A" << setw(7) << "B" << setw(7) << "C" << endl;
    cout << "$/Month: " << setw(8) << "9.95" << setw(9) << "14.95" << setw(10) << "19.95" << endl;
    cout << "Access Hours: " << setw(5) << "10" << setw(5) << "20" << setw(5) << "Unlimited" << endl;
    cout << "$/Additional Hours: " << setw(5) << "2.00" << setw(5) << "1.00" << setw(5) << "N/A" << endl;

    return 0;
}