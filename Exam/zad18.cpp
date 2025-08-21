//
// Created by Huhee on 8/21/2025.
//
#include "iostream"
using namespace std;
int main() {

    int m,n;
    cin>>m>>n;
    int matrix[100][100];
    int r,k;
    cin>>r>>k;
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    int minium =matrix[0][0];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (matrix[i][j]<minium) {
                minium = matrix[i][j];
            }
        }
    }


    for (int i = 0; i<r; i++) {
        for (int j = 0; j<k; j++) {
                matrix[i][j] = minium;
        }
    }


    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;;
    }

    return 0;
}