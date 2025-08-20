//
// Created by Huhee on 8/19/2025.
//
#include <string.h>

#include "iostream"
using namespace std;
int main() {

    int n;
    cin>>n;
    cin.ignore();
    char nizi[51];
    char tmp[51]; // tmp ke ni bidi koga ke najdeme NIZA koja gi ispolnuva site uslovi da ja pechatimeZ
    const char A1c[] = "a1c";
    int counter = 0; // broime kolku pati ke se pojavi podnizata
    for (int i = 0; i<n; i++) {
        cin.getline(nizi,51);

        for (int k = 0; k<strlen(nizi); k++) {
            nizi[k] = (char)tolower(nizi[k]);
        }
        counter = 0;
        const char *pointer = nizi;
        while ((pointer = strstr(pointer,A1c)) !=nullptr) {
            counter++;
            pointer+=strlen(A1c);
        }

        if (counter>=2) {

            cout<<nizi<<endl;
        }

    }

    // cout<<counter;


    return 0;
}