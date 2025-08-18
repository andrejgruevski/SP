//
// Created by Huhee on 8/18/2025.
//
// Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви.

// Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата. По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа, а истото важи и за редоследот на негативните.

// Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ] и потоа ќе ја испечати новодобиената низа.
#include "iostream"

using namespace std;
void premesti(int a[], int n) {
    int tmp[100];
    int index = 0;

    //pozitivnite gi klavamame na pochetokot od temp
    for (int i = 0; i<n; i++) {
        if (a[i] >=0) {
            tmp[index++] = a[i];
        }
    }
    // pa negativnite gi klavame na krajot od nizata
    for (int i =0; i<n; i++) {
        if (a[i]<0) {
            tmp[index++] = a[i];
        }
    }
    // temp ja kopirame vo orginalnata niza
    for (int i = 0; i<n; i++) {
        a[i] = tmp[i];
    }
}
int main() {

    int n;
    cin>>n;
    int niza[n];
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
    }
    premesti(niza,n);

    for (int i = 0; i<n; i++) {
        cout<<niza[i]<<" ";
    }
    return 0;
}