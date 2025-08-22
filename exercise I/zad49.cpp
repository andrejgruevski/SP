//
// Created by Huhee on 8/22/2025.
//
#include "iostream"
#include "cstring"
#include "cctype"
using namespace std;
int main() {

    char arr[100];
    cin.getline(arr,100);
    char a[100];
    int n=0;
    for (int i =0; i<strlen(arr); i++) {
        if (!isdigit(arr[i])) {
            if (isupper(arr[i])) {
                a[n++] = tolower(arr[i]);
            }else if (islower(arr[i])) {
                a[n++] = toupper(arr[i]);
            }
        }
    }
    a[n] = '\0';
    cout<<a;
    return 0;
}