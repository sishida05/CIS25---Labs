#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int num;
    int result;
    cout << "Please enter your favorite integer: " << endl;
    cin >> num;

    result = num * 2;
    result = result + 10;
    result = result / 2;
    result = result - num;

    cout << "Your magic number is: " << result << "!" << endl;

    return 0;
}