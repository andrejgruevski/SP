//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main() {
    int n;
    cin>>n;

    int desna = n % 10;
    int leva = (n/10000) % 10;

    n = n/10;
    n = (n % 1000);
    cout<<n<<endl;
    cout<<leva+desna;
    return 0;
}