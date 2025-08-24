//
// Created by Huhee on 8/24/2025.
//
#include <iostream>
using namespace std;

int najznachajna(int n) {
    int counter = 0; // kolku cifri ima brojot
    int broj = n;
    while (n>0) {
        counter++;
        n/=10;
    }
    int cifra =0;
    while (true) {
        int digit = broj%10;
        cifra = digit;
        broj/=10;
        counter--;
        if (counter == 0) {
            break;
        }
    }
    return cifra;
}
int main() {
    // int br;
    // cin>>br;
    // cout<<najznachajna(br);
    while (true) {
        int n;
        int broevi;
        cin >> n;
        if (n == 0) {
            break;
        }
        int najgolema = -1; // ja chuvame najgolemata cifra
        int broj = 0; // go chuvame brojot so najgolema cifra
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> broevi;

            int tmp = najznachajna(broevi);
            if (tmp > najgolema) {
                najgolema = tmp;
                broj = broevi;
                flag = true;
            }
        }
        if (flag) {
            cout<<broj<<endl;
        }
    }


    return 0;
}
