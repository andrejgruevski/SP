//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;
    int main() {

        int n;
        cin>>n;
        int arr[100];
        int max=0,min=arr[0];
        for (int i = 0; i<n; i++) {
            cin>>arr[i];
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        for (int i=0; i<n; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        cout<<"MAX -> "<<max<<endl;
        cout<<"MIN -> "<<min<<endl;;
        int razlika = max - min;
        for (int i = 0; i<n; i++) {
            arr[i]+=razlika;
        }

        for (int i = 0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        return 0;
    }