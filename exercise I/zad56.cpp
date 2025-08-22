//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
#include "cstring"
using namespace std;

int main() {

    char a[100];
    cin.getline(a,100);
    for (int i =0; i<strlen(a)/2; i++) {
        a[i] += a[strlen(a)-i-1];
    }
    cout<<a;
    return 0;
}