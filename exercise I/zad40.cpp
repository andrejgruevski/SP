//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++) {

        cin>>arr[i];

        if (i%2==0) {
            arr[i] *=2;
        }else {
            arr[i] +=2;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}