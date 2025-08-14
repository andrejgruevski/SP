//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
#include "cmath"
using namespace std;
int main() {
    float x,y;
    cin>>x>>y;


    float hip = (x*x) + (y*y);
    float p = x*y / 2;
    cout<<hip<<endl<<p;
    return 0;
}