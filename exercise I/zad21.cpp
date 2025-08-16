//
// Created by Huhee on 8/16/2025.
//
#include <algorithm>
#include "iostream"
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int niza[n];

    for (int i = 0; i<n; i++) {
        cin>>niza[i];
    }
    cout<<k<<"-te najmali elementi se: ";
    for (int i =0; i<n-1; i++) {
        bool swapped = false;
        for (int j = 0; j<n-i-1; j++) {
            if (niza[j]>niza[j+1]) {
              swap(niza[j],niza[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    for (int i =0; i<k; i++) {
           cout<<niza[i]<<" ";

    }

    return 0;
}
