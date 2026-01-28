#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    const double tax = 0.075;
    double price;
    double sale_tax;
    double total;

    cout << "Please enter the price of an item: " << endl;
    cin >> price;

    sale_tax = price * tax;
    total = price + sale_tax;

     cout << fixed << setprecision(2);
    cout << "Orignal Price: $" << price << endl;
    cout << "Sales Tax: " << setw(3) << "$" << sale_tax << endl;
    cout << "Total Cost: " << setw(3) << "$" << total << endl;

    return 0;
}