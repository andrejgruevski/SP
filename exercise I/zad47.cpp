//
// Created by Huhee on 8/22/2025.
//
#include "iostream"
using namespace std;

int deleteDuplicates(char arr[], int n) {
    char array[100];
    int m = 0;
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            arr[m++] = arr[i];
        }
    }
    return m;
}


int main() {
    int n;
    cin >> n;
    char arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << arr << endl << endl;
    int m = deleteDuplicates(arr,n);
    arr[m] ='\0';
    cout<<arr;

    return 0;
}
