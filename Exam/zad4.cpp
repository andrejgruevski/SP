//
// Created by Huhee on 8/18/2025.
//
#include "iostream"
using namespace std;

int par(int a[],int n) {
    int counter;
    int najmal = 0;
    for (int i =0; i<n; i++) {
        counter = 0;

        for (int j = 0; j<n; j++) {
            if (a[i] == a[j]) counter++;
        }

        if (counter%2==0) {
            if (najmal == 0 || a[i] < najmal) {
                najmal = a[i];
            }
        }
    }
    return najmal;
}
int main() {

    int n;
    cin>>n;
    int niza[n];

    for (int i =0; i<n; i++) {
        cin>>niza[i];
    }

    if (par(niza,n) == 0) {
        cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
    }else {
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<par(niza,n);
    }


    return 0;
}