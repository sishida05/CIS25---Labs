#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cout << "Please enter a positive integer to continue, or negative integer to stop: " << endl;
    cin >> num;
    sum += num;
    
    while (num >= 0) {
        cout << "Please enter a positive integer to continue, or negative integer to stop: " << endl;
        cin >> num;
        sum += num;
    }

    cout << "Final sum: " << sum - num << endl;

    return 0;
}