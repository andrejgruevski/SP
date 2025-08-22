//
// Created by Huhee on 8/22/2025.
//
#include "iostream"
using namespace std;

int poramnet (int a) {
    int broj=0;
    int counter = 1;
    while (a > 0) {
        int cifraA = a%10;
        if (cifraA == 9) {
            cifraA = 7;
        }
        broj += cifraA * counter;
        counter *=10;;
        a/=10;
    }
    return broj;
}
int main() {
    int broj;
    int arr[100];
    int n=0;
    while (cin>>broj) {
        arr[n++] = poramnet(broj);
    }

    for (int i =0; i<n-1; i++) {
        for (int j =0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    if (n<5) {
        for (int i =0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }else{
            for (int i =0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    }

    return 0;
}