//
// Created by Huhee on 8/9/2025.
//
#include "iostream"
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int avg = (x+y) / 2;
    x += avg;
    y -=avg;
    cout<<"Razlikata e: "<<x-y<<endl;
    return 0;
}