//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main() {
    int x,y;

    int sumX,sumY;
    cin>>x>>y;
    int tX = x%10;
    int vX = (x/10)%10;
    int pX = (x/100)%10;
    int nX = (x/1000) % 10;

    int tY = y%10;
    int vY = (y/10)%10;
    int pY = (y/100)%10;
    sumX = tX+vX+pX+nX;
    sumY = pY+vY+tY;
    if (sumX>sumY) {
        cout<<"1";
    }else {
        cout<<"0";
    }

    return 0;
}