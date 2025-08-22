//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
#include "cstring"
using namespace std;
void transform (char a[]) {
    int n = strlen(a)/2, r=(n+1)/2;
    for (int i =0; i<n; i++) {
        a[i] = a[i+r];
    }
}
int main() {
    char arr[81];
    cin.getline(arr,81);
    cout<<arr<<endl<<endl;
    transform(arr);
    cout<<arr;
    return 0;
}