//
// Created by Huhee on 8/23/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int  i =0; i<n; i++) {
        cin>>a[i];
    }
    int b[100];
    int k =0;
    //prvo pozitivnite gi klavame na pochetok od nizata
    for (int i =0; i<n; i++) {
        if (a[i] >=0) {
            b[k++] = a[i];
        }
    }
    // potoa negativnite gi klavame na kraj od nizata
    for (int i = 0; i<n; i++) {
        if (a[i]<0) {
            b[k++] = a[i];
        }
    }

    for (int  i =0; i<n; i++) {
        cout<<b[i]<<" ";
    }


    return 0;
}