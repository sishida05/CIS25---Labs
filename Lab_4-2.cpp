#include <iostream>
using namespace std;

void findMinAndMax(const int arr[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}


int main() {

    const int size = 10;
    int numbers[size] = {23, 5, 67, -2, 45, 87, 1, 99, 34, -10};

    int min = numbers[0];
    int max = numbers[0];

    findMinAndMax(numbers, size, &min, &max);
    
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}