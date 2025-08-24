//
// Created by Huhee on 8/24/2025.
//
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int matrix[100][100];
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }
    int counter = 0;
    bool flag;
    int c;

    for (int i =0; i<n; i++) {
        c = 0;
        flag = false;
        for (int j =0; j<m; j++) {
            if (matrix[i][j]==1) {
                c++;
            }else {
                if (c>=3) {
                    flag = true;
                    counter++;
                    break;;
                }
                c = 0;
            }
        }
        if (!flag && c>=3) {
            counter++;
        }
    }
    for (int i =0; i<m; i++) {
        c = 0;
        flag = false;
        for (int j =0; j<n; j++) {
            if (matrix[j][i]==1) {
                c++;
            }else {
                if (c>=3) {
                    flag = true;
                    counter++;
                    break;;
                }
                c = 0;
            }
        }
        if (!flag && c>=3) {
            counter++;
        }
    }
    cout<<counter;

    return 0;
}