//
// Created by Huhee on 8/21/2025.
//
#include "iostream"
using namespace std;
int main() {

    int n;
    cin>>n;
    float matrix[100][100];
    for (int i = 0; i<n; i++) {
        for (int j =0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    float x = 0; // pod glavna diagonala
    for (int i = 0; i<n; i++) {
        for (int j =0; j<n; j++) {
            if (i>j) {
                x+=matrix[i][j];
            }
        }
    }
    float y = 0; // pod sporedna diagonala
    for (int i = 0; i<n; i++) {
        for (int j =0; j<n; j++) {
            if (i+j > n-1) {
                y+=matrix[i][j];
            }
        }
    }
    float matrica[100][100];
    for (int i = 0; i<n; i++) {
        for (int j =0; j<n; j++) {

            if ((i == j) && (i+j == n-1)) {
                matrica[i][j] = y+x;
            }else if (i==j) {
                matrica[i][j] = x;
            }else if (i+j == n-1) {
                matrica[i][j] = y;
            }else {
                matrica[i][j] = 0;
            }
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}