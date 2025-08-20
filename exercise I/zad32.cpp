//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;

void transform(int* arr, int n) {
    int min = arr[0], max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    int razlika = max - min;
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            arr[i] = max;
        }
        else if (arr[i] == max) {
            arr[i] = min;
        }else {
            arr[i]+=razlika;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    transform(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
