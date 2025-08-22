//
// Created by Huhee on 8/23/2025.
//
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[]) {

    for (int i =0; i<strlen(a)/2; i++) {
        if (a[i] != a[strlen(a)-i-1]) {
            return false;
        }
    }
    return true;
}
int main() {

    char a[100];
    cin.getline(a,100);
    cout<<isPalindrome(a);

    return 0;
}