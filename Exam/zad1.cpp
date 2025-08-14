//
// Created by Huhee on 8/12/2025.
//
#include <string.h>

#include "iostream"
#include "string"
using namespace std;

bool isPalindrome(string &s) {
    int i = 0, j = (int)s.size()-1;

    while (i < j) {
        if (s[i] != s[j]) return false;
        ++i;
        --j;
    }
    return true;
}
int main() {

    string str;
    string largestStr;

    int n;
    cin>>n;
    cin.ignore();
    for (int i =0; i<n; i++) {
        getline(cin,str);

    }
    for (int i =0; i<n; i++) {
        if (isPalindrome(str) && str.length() > largestStr.length()) {
            largestStr = str;
        }
    }
    cout<<largestStr;


    return 0;
}