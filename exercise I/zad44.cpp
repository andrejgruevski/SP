//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
#include "cstring"
using namespace std;

bool isValid (char *arr) {
    int n=0;
    for (int i =0; i<strlen(arr)-1; i++) {
        if ((isdigit(*(arr+i))) || ((*(arr+i))=='-') || ((*(arr+i))=='+')) n++;
        else return 0;
    }
    if ((n) && ((*arr) =='+') && ((*(arr+4))=='-') && ((*(arr+7))=='-')) return 1;
    else return 0;
}
int main() {
    char niza[14];
    for (int i =0; i<14; i++) {
        cin>>niza[i];
    }
    if (isValid(niza)) {
        cout<<"Validen broj";
    }else {
        cout<<"Nevaliden broj";
    }

    return 0;
}