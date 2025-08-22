//
// Created by Huhee on 8/22/2025.
//
#include <string.h>
#include "iostream"
using namespace std;
int main() {

    char z1,z2;
    cin>>z1>>z2;
    char niza[81];
    cin.ignore();
    int pochetok = 0, kraj = 0;
    while (true ) {
        cin.getline(niza,81);
        if (!(strcmp(niza,"#"))) {
            break;
        }

        for (int i =0; i<strlen(niza); i++) {
            if (niza[i]==z1) {
                pochetok = i;
            }else if (niza[i]==z2) {
                kraj = i;
            }
        }
        for (int j = pochetok+1; j<kraj; j++) {
            cout<<niza[j];
            // break;
        }
        cout<<endl;

    }

    return 0;
}