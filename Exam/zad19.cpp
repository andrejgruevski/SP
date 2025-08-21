//
// Created by Huhee on 8/21/2025.
//
#include "iostream"
using namespace std;
int main () {

    int n,m;
    cin>>n>>m;
    int matrix[100][100];
    for (int i =0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }
    int x,y,z,k;
    cin>>x>>y>>z>>k; // koordinati vo matricata
    for (int i =x; i<=z; i++) {
        for (int j = y; j<=k; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i =0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}