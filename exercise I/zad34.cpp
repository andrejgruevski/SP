//
// Created by Huhee on 8/20/2025.
//
//
// Created by Huhee on 8/20/2025.
//
#include <iostream>
using namespace std;
bool divisibleByK (int number, int k) {
    if (number %k == 0) {
        return true;
    }
    return false;
}
int nextDivisibleByK (int number, int k) {
    number+=1;
    while (true) {
        if (number %k==0) {
            break;
        }
        number++;
    }
    return number;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    for (int i = a; i<=b; i++) {
        cout<<i<<" -> "<<nextDivisibleByK(i,c)<<endl;
    }
    return 0;
}