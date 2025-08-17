//
// Created by Huhee on 8/17/2025.
//
#include "iostream"
using namespace std;
int main() {
    int n;
    cin>>n;

    int niza[n];
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
    }
    int parni =0, parenBroj=0;
    int neparni=0, neparenBroj=0;

    for (int i = 0; i<n; i++) {
        int pozicija = i+1;
        if (pozicija%2 ==0) {
            parni++;
            if (niza[i]%2==0) parenBroj++;
        }else {
            neparni++;
            if (niza[i]%2!=0) neparenBroj++;
        }
    }

    bool flag = (parni == 0) ? true : (parenBroj * 100.0 / parni >=50.0);
    bool flag1 = (neparni == 0) ? true : (neparenBroj * 100.0 / neparni <=30.0);

    cout<< (flag && flag1 ? 1 : 0);

    return 0;
}