//
// Created by Huhee on 8/12/2025.
//
#include <string.h>

#include "iostream"
#include "string"
using namespace std;

bool isPalindrom(string &str) {
    for (int i = 0; i<str.length()/2; i++) {
        if (str[i] != str[str.length()-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin>>n;
    cin.ignore();
    string str;
    string largest;
    bool flag = false;
    for (int i = 0; i<n; i++) {
        getline(cin,str);

        if (isPalindrom(str)) {
            if (str.length()>largest.length() || str.length() == largest.length() && str < largest) {
                largest=str;
                flag = true;
            }
        }
    }
    if (flag) {
        cout<<largest;
    }else {
        cout<<"NEMA";
    }


    return 0;
}