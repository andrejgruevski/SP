//
// Created by Huhee on 8/19/2025.
//
// da se napishe kvadratnata matrica N(n od standard input), kade parnite redovi se pecatat od levo kon desno, a neparnite od desno kon levo
// pr. input:4
// output:
// 1 2 3 4
// 8 7 6 5
// 9 0 1 2
// 6 5 4 3
#include "iostream"
using namespace std;
int main() {
    int n;
    int matrix[100][100];
    cin>>n;
    int p = 1;
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (p>=10) {
                p%=10;
            }
            matrix[i][j]=p++;
        }
    }
    //ova e samo za sporedba so debug
    // for (int i =0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"----------"<<endl;
    for (int i =0; i<n; i++) {
        if (i%2==0) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
        }else {
            for (int j = n-1; j>=0; j--) {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }





    return 0;
}