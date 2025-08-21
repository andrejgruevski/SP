//
// Created by Huhee on 8/21/2025.
//
#include "iostream"
using namespace std;

int main() {
    int k, n;
    cin >> k;

    int matrix[100][100];

    for (int i = 0; i < 100; i++) {
        if (i * i >= k) {
            n = i;
            break;
        }
    }
    int counter = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // polnime od gore pa nadolu, proveruvame spored indeksite na kolonite prva,vtora...
            for (int j = 0; j < n; j++) {
                if (counter > k) {
                    matrix[j][i] = 0;
                }
                else {
                    matrix[j][i] = counter;
                    counter++;
                }
            }
        }else { // for od dolu nagore
            for (int j = n-1; j >= 0; j--) {
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
