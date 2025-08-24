//
// Created by Huhee on 8/24/2025.
//
#include <iostream>
using namespace std;
int main() {

    int x;
    cin>>x;
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    for (int i =0; i<n; i++) {
        int sum = 0;
        for (int j =0; j<m; j++) {
            sum+=a[i][j];
        }
        for (int j =0; j<m; j++) {
            if (sum>x) {
                a[i][j] = 1;
            }else if (sum < x) {
                a[i][j] = -1;
            }else {
                a[i][j] = 0;
            }
        }
    }
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}