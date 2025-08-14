//
// Created by Huhee on 8/14/2025.
//
#include <chrono>

#include "iostream"
using namespace std;
int main() {
    int days;
    cin>>days;

    int years = days / 365;
    int months = (days - (years * 365)) / 30;
    int d = days - (years * 365) - (months * 30);
    cout<<"Years: "<<years<<", months: "<<months<<", days: "<<d<<endl;


    return 0;
}