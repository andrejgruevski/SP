//
// Created by Huhee on 8/24/2025.
//
#include <iostream>
using namespace std;
int sum_pos(int a[], int ind, int n) {
    int sum = 0;
    if (ind>n) {
        return 0;
    }
    for (int i =ind; i<n; i++) {
        sum+=a[i];
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i =0; i<n; i++) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<sum_pos(a,k,n);


    return 0;;
}