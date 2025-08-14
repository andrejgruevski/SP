//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main() {

    int n;
    cin>>n;

    int treta = n%10;
    int vtora = (n/10)%10;
    int prva = (n/100)%10;
    int nulta = (n/1000) % 10;

    if (nulta < prva && prva < vtora && vtora < treta) {
        cout<<"1";
    }else {
        cout<<"0";
    }
    return 0;
}