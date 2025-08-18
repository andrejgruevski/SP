//
// Created by Huhee on 8/18/2025.
//
#include "iostream"
using namespace std;

bool palindrom(string &str) {
    for (int i =0; i<str.length()/2; i++) {
        if (str[i] != str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}
int main() {

    int n;
    cin>>n;
    cin.ignore();

    string str;
    string najmal;
    bool flag=false;

    for (int i = 0; i<n; i++) {
        cin>>str;

        if (!palindrom(str)) {
            if (!flag || str.length() < najmal.length()) {
                najmal = str;
                flag = true;
            }
        }
    }
    if (flag) {
        cout<<najmal;
    }else {
        cout<<"NEMA"<<endl;
    }
    return 0;
}