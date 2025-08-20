//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;
bool rastechki(int broj) {

    while (broj > 0) {
        if (broj%10 < (broj/10)%10) {
            return false;
        }
        broj/=10;
    }
    return true;
}
int sum (int broj) {

    int sum = 0;
    while (broj > 0) {
        int cifra = broj%10;
        sum+=cifra;
        broj/=10;
    }
    return sum;

}
int main() {
    int n;
    cin >> n;

    int broj;
    for (int i = 0; i < n; i++) {
        cin >> broj;

        if (rastechki(broj)) {
            cout<<broj<<" (suma: "<<sum(broj)<<")"<<endl;
        }
    }
    return 0;
}
