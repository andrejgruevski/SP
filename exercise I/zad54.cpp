//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
using namespace std;
int funkcija (int a[],int n) {
    int sumParni=0;
    int sumNeparni=0;
    for (int i =0; i<n; i++) {
        if (i%2==0) {
            sumParni+=a[i];
        }else {
            sumNeparni+=a[i];
        }
    }
    if (sumParni>sumNeparni) {
        return 0;
    }else {
        return 1;
    }
}
int main() {

    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    cout<<funkcija(a,n);

    return 0;
}