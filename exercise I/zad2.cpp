//
// Created by Huhee on 8/8/2025.
//
#include "iostream"
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int br = (a*100) + (b*10) + c;
    cout<<br<<endl;;
    cout<<br - a<<" "<<br-b<<" "<<br-c<<endl;
    return 0;
}