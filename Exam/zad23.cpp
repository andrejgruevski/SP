//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
using namespace std;

int main() {
    int k;
    cin >> k;
    int n = 0;
    for (int i = 0; i < k; i++) {
        if (i * i < k) {
            n++;
        }
    }
    int matrix[100][100];
    int counter = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (counter > k) {
                    matrix[j][i] = 0;
                }
                else {
                    matrix[j][i] = counter;
                    counter++;
                }
            }
        }
        else {
            for (int j = n-1; j >=0; j--) {
                if (counter > k) {
                    matrix[j][i] = 0;
                }
                else {
                    matrix[j][i] = counter;
                    counter++;
                }
            }
        }
    }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
