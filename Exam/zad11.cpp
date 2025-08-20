//
// Created by Huhee on 8/19/2025.
//
// За даден природен број N, да се пополни матрица N x N со буквите A, B, C, D, E, F, G, H, I по редови, во змијовиден (цик-цак) облик, односно:
//
// редовите со парен индекс (0, 2, 4, ...) се пополнуваат од лево кон десно
//
// редовите со непарен индекс (1, 3, 5, ...) се пополнуваат од десно кон лево
#include "iostream"
using namespace std;
int main() {
    int n;
    cin>>n;
    char matrix[100][100];

    string letters= "ABCDEFGHI";
    int index = 0;
    for (int i = 0; i<n; i++) {
        if (i%2==0) {
            for (int j = 0; j<n; j++) {
                matrix[i][j] = letters[index];
                index = (index+1) % letters.size();
            }
        }else {
            for (int j =n -1; j>=0; j--) {
                matrix[i][j] = letters[index];
                index = (index+1)  % letters.size();
            }
        }
    }
    for (int i =0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}