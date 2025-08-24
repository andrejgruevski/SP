//
// Created by Huhee on 8/24/2025.
//
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
int samoglaska (char c) {
    c = tolower(c);
    return c == 'a' || c == 'i' ||c == 'e' ||c == 'o' ||c == 'u';
}
int main() {

    char arr[100];
    int counter = 0;
    while (cin>>arr) {
        if (strcmp(arr,"#")==0) {
            break;;
        }

        for (int i =0; i<strlen(arr); i++)
                if (samoglaska(arr[i]) && samoglaska(arr[i+1])) {
                    cout<<(char)tolower(arr[i]);
                    cout<<(char)tolower(arr[i+1])<<endl; // kastirame radi to sho pechati asci kodovi ne pechati bukvata i kastirame vo char
                    counter++;
                }
    }
    cout<<counter;
    return 0;
}