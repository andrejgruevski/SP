//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;
int main() {

    int arr[100];
    int broj;
    int n =0;

    while (cin>>broj) {
        arr[n++] = broj;
    }
    for (int i = 0; i<n; i++) {
        for (int j = 1; j<n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] += j-i;
            }
        }
    }
    for (int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}