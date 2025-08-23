//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
#include "cstring"
using namespace std;
bool hasSpecial(char a[]) {
    for (int i =0; i<strlen(a); i++) {
        if (!isalnum(a[i])) {
            return true;
        }
    }
    return false;
}
bool isPalindrome(char a[]) {
    for (int i = 0; i < strlen(a) / 2; i++) {
        if (a[i] != a[strlen(a) - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char arr[81];
    char largest[81];
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin.getline(arr, 81);

        if (isPalindrome(arr) && hasSpecial(arr)) {
            for (int j = 0; j < strlen(arr); j++) {
                if (strlen(arr) > strlen(largest)) {
                    strcpy(largest, arr);
                    flag = true;
                }
            }
        }
    }
    if (flag) {
        cout << largest;
    }
    else {
        cout << "Nema!";
    }

    return 0;
}
