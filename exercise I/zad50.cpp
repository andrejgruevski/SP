//
// Created by Huhee on 8/22/2025.
//
#include "iostream"
#include "cstring"
using namespace std;

int funkcija (const char a[],  const char b[]) {
    int counter =0;

    if (strlen(a) != strlen(b)) {
        return -1;
    }
        for (int i =0; i<strlen(a); i++) {
            if (a[i] != b[i]) {
                counter++;
            }
        }

    return counter;
}
int main() {

    char niza[50];
    char niza1[50];
    cin.getline(niza,50);
    cin.ignore();
    cin.getline(niza1,50);
    cout<<funkcija(niza,niza1);

    return 0;
}