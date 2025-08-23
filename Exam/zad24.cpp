//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
#include "cstring"
using namespace std;

void tolower(char a[]) {
    for (int i = 0; i<strlen(a); i++) {
        a[i] = tolower(a[i]);
    }
}
int main() {

    int n;
    cin>>n;
    cin.ignore();
    char arr[51];
    char A1c[] = "a1c";
    int counter = 0;
    for (int i =0; i<n; i++) {
        cin.getline(arr,51);
        tolower(arr);
        counter= 0;
        // char *p = arr;
        // while ((p = strstr(p,A1c))!=nullptr) {
        //     counter++;
        //     p+=strlen(A1c);
        // }
        int l = strlen(arr);
        int y = strlen(A1c);
        for (int j = 0; j<l; j++) {
            bool flag = true;
            for (int k = 0; k<y; k++) {
                if (arr[j+k] != A1c[k]) {
                    flag = false;
                    break;;
                }
            }
            if (flag)counter++;
        }
        if (counter>=2) {
            cout<<arr<<endl;
        }
    }
    // cout<<counter;
    return 0;
}