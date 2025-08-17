//
// Created by Huhee on 8/17/2025.
//
#include "iostream"
using namespace std;
int main() {
    int n;
    cin>>n;
    int niza[n];
    for (int i =0; i<n; i++) {
        cin>>niza[i];
    }
    for (int i = 0; i<n; i++) {
        if (niza[i]%2==0) {
            niza[i] +=1;
        }else {
            niza[i]-=1;
        }
    }
    for (int i =0; i<n; i++) {
        cout<<niza[i]<<" ";
    }
    return 0;
}