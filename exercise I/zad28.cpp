//
// Created by Huhee on 8/17/2025.
//
#include "iostream"
#include "iomanip"
using namespace std;
int main() {
    int n;
    cin>>n;
    int matrix[100][100];
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }

    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j==i) {
                if (matrix[i][j] > 0) {
                    matrix[i][j] = -matrix[i][j];
                }else {
                    matrix[i][j] = abs(matrix[i][j]);
                }
            }
        }
    }

    for (int i =0; i<n; i++) {

        for (int j=0; j<n; j++) {
            cout<<setw(3)<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}