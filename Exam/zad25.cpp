//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    int r,k;
    cin>>r>>k;
    int matrix[100][100];
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }

    int minium = matrix[0][0];
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            if (matrix[i][j] < minium) {
                minium = matrix[i][j];
            }
        }
    }
    for (int i =0; i<r; i++) {
        for (int j = 0; j<k; j++) {
            matrix[i][j] = minium;
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