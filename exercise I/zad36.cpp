//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;

bool isPalindrome(int n) {
    int broj = n;
    int obraten = 0;
    while (n>0) {
        int cifra = n %10;
        obraten = obraten *10 + cifra;
        n/=10;
    }
    return broj == obraten;
}
bool containsDigits(int n) {
    int broj = n;
    while (broj>0) {
        int cifra = broj %10;
        if (cifra != 1 && cifra != 3 && cifra != 4 && cifra != 2 && cifra != 0) {
            return false;
        }
        broj/=10;
    }
    return true;
}
int main() {

    int a,b;
    cin>>a>>b;

    for (int i=a; i<=b; i++) {
        if (isPalindrome(i) && containsDigits(i)) {
            cout<<i<<endl;
        }
    }
    return 0;
}