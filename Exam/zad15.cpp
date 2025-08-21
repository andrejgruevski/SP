//
// Created by Huhee on 8/21/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n, x;
    string str;
    cin >> n >> x;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, str);
        string result;
        for (int j = 0; j < str.length(); j++) {
            char c = str[j];
            char base;
            if (isalpha(c)) {
                if (islower(c)) {
                     base = 'a';
                }else {
                    base = 'A';
                }
                char pomestuvanje = ((c - base + x) % 26) + base;
                result += pomestuvanje;
            }
            else {
                result += c;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
