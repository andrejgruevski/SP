//
// Created by Huhee on 8/17/2025.
//
#include "iostream"

using namespace std;
int main() {
    int m;
    cin>>m;

    int arrM[m];

    for (int i =0; i<m; i++) {
        cin>>arrM[i];
    }
    int n;
    cin>>n;
    int arrN[n];
    for (int i =0; i<n; i++) {
        cin>>arrN[i];
    }
    int k = m+n;

    int array[200];
    for (int i=0; i<m; i++) {
        array[i] = arrM[i];
    }
    for (int i=0; i<n; i++) {
        array[m+i] = arrN[i];
    }

    for (int i=0; i<k-1; i++) {
        for (int j =0; j<k-i-1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j],array[j+1]);
            }
        }
    }
    for (int i=0; i<k; i++) {
        cout<<array[i]<<" ";
    }


    return 0;
}