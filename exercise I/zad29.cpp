//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;
bool isPalindrome(int broj) {
    int counter = 0;
    int n = broj;
    int obraten = 0;
    while (broj > 0) {
        int digit = broj %10;
        obraten = obraten * 10 + digit;
        broj/=10;
    }
    if (obraten==n) {
        return true;
    }else {
        return false;
    }
}
double sum(int broj) {
    int sum  = 0;
    while (broj>0) {
        int cifra =broj %10;
        sum+=cifra;
        broj/=10;
    }
    return sum;
}
int digits(int broj) {
    int counter = 0;
    while (broj > 0) {
        counter++;
        broj/=10;
    }
    return counter;
}
int main() {
    int broj;
    while (cin>>broj) {
        if (isPalindrome(broj)) {
            cout<<sum(broj)<<endl;
        }else {
            cout<<digits(broj)<<endl;
        }
    }

    return 0;
}