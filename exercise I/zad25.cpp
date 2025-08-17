//
// Created by Huhee on 8/17/2025.
//
#include "iostream"
using namespace std;
int main() {

    int n = 0;
    int broj;
    int niza[100];
    while (n<100) {
        if (cin>>broj) {
            if (broj == -1) {
                break;
            }
            niza[n] = broj;
        }
        n++;
    }
    int L, R, V, I;


    for (int i=0; i<3; i++) {
        cin>>L>>R>>V>>I;
        if (I == 0) {
            for (int j = L; j<=R; j++) {
                niza[j] += V;
            }
        }else if (I == 1) {
            for (int k = L+1; k<R; k++) {
                niza[k] += V;
            }
        }
    }
    for (int i =0; i<n; i++) {
        cout<<niza[i]<<" ";
    }


    return 0;
}