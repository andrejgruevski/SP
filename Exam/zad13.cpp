//
// Created by Huhee on 8/19/2025.
//
#include <string.h>
#include "iostream"
using namespace std;

bool isPalindrome(char str[80]) {
    for (int i =0; i<strlen(str)/2; i++) {
        if (str[i] != str[strlen(str)-i-1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;

    char str[80];
    bool flag = false;

    char largest[80];
    for (int i =0;i<n;i++) {
        cin.getline(str,80);

        if (isPalindrome(str)) {
            if (strlen(str) > strlen(largest)) {
                strcpy(largest,str);
                for (int j =0; j<strlen(largest); j++) {
                    if (!isalnum(largest[j])) {
                        flag = true;
                    }
                }
            }
        }
    }
    if (flag) {
        cout<<largest;
    }else {
        cout<<"Nema!";
    }



    return 0;
}