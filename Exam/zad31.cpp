//
// Created by Huhee on 8/23/2025.
//
#include <iostream>
using namespace std;

void function (int a[],int n) {
    int prv = a[0];
    int b[100];

    for (int i =0; i<n; i++) {
        b[i] = a[i];
    }
    for (int i =0; i<n; i++) {
        a[i] = 0;
    }
    if (prv > 0) {
        for (int i = 0; i<n; i++) {
            if ( i + prv < n) {
                a[i+prv] = b[i];
            }
        }
    }else if (prv < 0) {
        prv = -prv;
        for (int i =0; i<n; i++) {
            if ( i - prv >=0) {
                a[i-prv] = b[i];
            }
        }
    }else {
        for (int i =0; i<n; i++) {
            a[i] = b[i];
        }
    }
}
int main() {
    int m;
    cin>>m;
    int arr[100];
    // for (int i =0; i<m; i++) {
    //     cin>>arr[i];
    // }
    // function(arr,m);
    // for (int i =0; i<m; i++) {
    //     cout<<arr[i];
    // }
    int counter = 0;
    for (int i =0; i<m; i++) {
        int n;
        cin>>n;

        for (int j =0; j<n; j++) {
            cin>>arr[j];
        }
        function(arr,n);
        bool flag = true;
        for (int l =0; l<n; l++) {
            if (arr[l] != 0) {
                flag = false;
                break;;
            }
        }
        for (int k =0; k<n; k++) {
            cout<<arr[k]<<" ";
        }
        if (flag) {
            counter++;
        }
        cout<<endl;

    }
    cout<<counter;
    return 0;
}