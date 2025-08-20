//
// Created by Huhee on 8/19/2025.
//
#include "iostream"
using namespace std;
void printLine(int i, int count) {
    if (count == 0) return;
    cout<<1;
    printLine(i,count -1);
}
void printPattern(int n, int current=1) {
    if (current>n) return;;
    printLine(n,current-1);
    cout<<current;
    printLine(n,current-1);
    cout<<endl;
    printPattern(n,current+1);
}
int main() {
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}