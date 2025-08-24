//
// Created by Huhee on 8/24/2025.
//
#include <iostream>
#include <string.h>
using namespace std;
int main() {

    char a[100];
    while (cin.getline(a,100)) {
        if (strcmp(a,"#")==0) {
             break;;
        }
        int counter = 0;
        int n[100];
        int cifri = 0;
        for (int i =0; i<strlen(a); i++) {
            if (isdigit(a[i])) {
                counter++;
                n[cifri] =  a[i] - '0';
                cifri++;
            }
        }
        cout<<counter<<":";
        for (int i =0; i<cifri-1; i++) {
            for (int j =0; j<cifri-i-1; j++) {
                if (n[j] > n[j+1]) {
                    swap(n[j],n[j+1]);
                }

            }
        }
        for (int i =0; i<cifri; i++) {
            cout<<n[i];
        }
        cout<<endl;
    }
    return 0;
}