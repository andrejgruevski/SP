//
// Created by Huhee on 8/16/2025.
//
#include "iostream"
using namespace std;
int main() {

    int niza[100];
    int n=0;
    int br;

    while (true) {
        if (!(cin>>br)) {
            break;
        }else {
            niza[n] = br;
        }
        n++;
    }
    for (int i =0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (niza[j] == niza[i]) {
                niza[j]+=(j-i);
            }
        }
    }
    for (int i = 0; i<n; i++) {
        cout<<niza[i]<<" ";
    }
    return 0;
}