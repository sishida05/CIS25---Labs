#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inputFile;
    inputFile.open("temperatures.txt");
    double temp, sum, count;

    while (inputFile >> temp) {
        count++;
        sum += temp;
    }

    cout << "Temperatures analyzed for " << count << " days." << endl;
    cout << "Sum of temperatures: " << sum << endl;
    cout << "The average temperature: " << sum/count << endl;

    return 0;
}