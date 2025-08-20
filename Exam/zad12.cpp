//
// Created by Huhee on 8/19/2025.
//
#include "iostream"
using namespace std;
void printAscending(int i, int k) {
    if (i > k) return;;
    cout<< i;
    printAscending(i + 1, k);
}
void printDescending(int k) {
    if (k == 0) return;;
    cout << k;
    printDescending( k  - 1);
}
void print(int k) {
    printAscending(1,k);
    printDescending(k-1);
    cout<<endl;
}
int main () {

    int n;
    cin>>n;
    for (int i = n; i>=1; i--) {
        print(i);
    }
    return 0;
}