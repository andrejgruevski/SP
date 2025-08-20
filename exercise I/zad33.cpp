//
// Created by Huhee on 8/20/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    int counter = 0;
    for (int i = 0; i<n; i++) {
        cin>>arr[i];

        if (arr[i] == k) {
            counter++;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Brojot "<<k<<" vo nizata se naogja "<<counter<<" pati."<<endl;
    return 0;
}