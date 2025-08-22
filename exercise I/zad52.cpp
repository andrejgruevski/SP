//
// Created by Huhee on 8/23/2025.
//
#include <string.h>

#include "iostream"
using namespace std;
int main() {

    char a[100];
    while (cin>>a) {
        if (!strcmp(a,".")) {
            break;;
        }
        if (isdigit(*a)) {
            cout<<a;
        }
    }
    return 0;
}