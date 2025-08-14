//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main() {

    int tricifren,chetiricfren;
    cin>>tricifren>>chetiricfren;

    int nulta = (tricifren / 100) % 10;
    int vtora = tricifren % 10;

    int prva = (chetiricfren / 100) % 10;
    int treta = chetiricfren % 10;

    float avg = (nulta + vtora + treta + prva) / 4.0;
    cout<<avg;
    return 0;
}