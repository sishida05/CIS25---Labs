#include <iostream>
#include <iomanip>
using namespace std;

void gradeAmt() {
    double scoreAmt;
    cout << "How many scores would you like to grade?" << endl;
    cin >> scoreAmt;
    if (scoreAmt <= 0) {
        cout << "Invalid amount. Please try again." << endl;
        gradeAmt();
    }
}

void getScores(double* arr, int size) {
    int score;
    for (int i = 0; i < size; i++) {
        cout << "Please enter the score for Grade " << i << ": " << endl;
        cin >> score;
        while (score < 0) {
           cout << "Invalid score. Please try again." << endl;
           if (score >= 0) {
            break;
           }
        }
        arr[i] = score;
    }
    cout << "Scores: " << score << " " << endl;
}

void sortScores(double* arr, int size) {
     for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                cout << "Sorted scores: " << arr[j] << " " << endl;
            }
        }
    }
    
}

double calculateAverage(const double* arr, int size) {
    int sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum/size;
}

int main() {

    gradeAmt();

    double * ptr;
    double grades[scoreAmt];
    *ptr = grades[scoreAmt];

    cout << fixed << setprecision(2) << endl;

    getScores(grades, scoreAmt);
    cout << endl;
    sortScores(grades, scoreAmt);
    cout << endl;
    cout << "Average Score: " << calculateAverage(grades, scoreAmt) << endl;

    delete ptr;
    ptr = nullptr;
    
    return 0;
}