#include <iostream>
#include <iomanip>
using namespace std;

void getScores(double* arr, int size) {
    int score;
    for (int i = 0; i < size; i++) {
        cout << "Please enter the score for Grade " << i + 1 << ": " << endl;
        cin >> score;
        if (score < 0) {
           cout << "Invalid score. Please try again." << endl;
        }
        arr[i] = score;
    }
}

void sortScores(double* arr, int size) {
     for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            cout << arr[j] << " ";
        }
    }
    cout << endl;
}

double calculateAverage(const double* arr, int size) {
    double sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum/size;
}

int main() {

    double* arr = nullptr;
    int classSize;
    cout << "How many scores would you like to grade?" << endl;
    cin >> classSize;
    while (classSize <= 0) {
        cout << "Invalid amount. Please try again." << endl;
        if (classSize >= 0) {
            break;
        }
    }
    
    arr = new double[classSize];

    cout << fixed << setprecision(2) << endl;

    getScores(arr, classSize);
    cout << endl;
    cout << "Sorted scores: "; 
    sortScores(arr, classSize);
    cout << endl;
    cout << "Average Score: " << calculateAverage(arr, classSize) << endl;

    delete[] arr;
    arr = nullptr;
    
    return 0;
}