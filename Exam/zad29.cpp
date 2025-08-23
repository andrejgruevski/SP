//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
using namespace std;
int funkcija (int n,int m) {

    int p = 1;
    if (m ==0) {
        p = 10;
    }else {
        int  t = m;
        while (t) {
            p *= 10;
            t/=10;
        }
    }
    return n * p + m;
}
int main() {
    int n,m;
    cin>>n>>m;
    int matrix[120][120];
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }

    for (int i =0; i<m; i++) {
        int counter = 0;
        for (int j =0; j<n; j++) {
            if (matrix[j][i] == funkcija(j,i)) {
                counter++;
            }
        }
        cout<<counter<<endl;
    }


    return 0;
}