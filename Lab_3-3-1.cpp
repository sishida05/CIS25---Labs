#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int days;
    double temp;

    cout << "How many days of temperatures would you like to record: " << endl;
    cin >> days;

    ofstream outputFile;
    outputFile.open("temperatures.txt");

    for (int i = 1; i <= days; i++) {
        cout << "Please input the high temperature for day " << i << ": " << endl;
        cin >> temp;
        outputFile << temp << endl;
    }
    
    outputFile.close();
    
    return 0;
}