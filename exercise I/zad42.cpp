//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
#include "cmath"
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i =0; i<n; i++) {
        if (arr[i]<0) {

            arr[i] = 2*abs(arr[i]);
        }else {
            arr[i]+=arr[i];
        }
    }
    for (int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}