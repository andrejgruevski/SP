//
// Created by Huhee on 8/22/2025.
//
#include <iostream>
#include <cstring>
using namespace std;

void funckcija (const char a[], const char b[]) {
    int counter = 0;
    char d[81];
    for (int i=0; i<strlen(a); i++) {
        if (a[i] != b[i]) {
            d[counter++] = a[i];
        }
    }
    d[counter] = '\0';
    int n = strlen(a) - strlen(d);
    cout<<"izlez na promenetata niza e: "<<d<<" so isfrleni znaci: "<<n;
}
int main() {

    char a[81],b[81];
    cin.getline(a,81);
    cin.ignore();
    cin.getline(b,81);
    funckcija(a,b);
    return 0;
}