//
// Created by Huhee on 8/19/2025.
//
// vnesuvas n pa n-nizi od karakteri, od sekoja niza da se isfrlat samoglaskite i taka da se ispecati
#include "iostream"
#include "cstring"
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char arr[100];

    for (int i = 0; i < n; i++) {
        cin.getline(arr, 100);
        int len = strlen(arr);

        for (int j = 0; j < len; j++) {
            if (arr[j] == 'a' || arr[j] == 'A' ||
                arr[j] == 'e' || arr[j] == 'E' ||
                arr[j] == 'i' || arr[j] == 'I' ||
                arr[j] == 'o' || arr[j] == 'O' ||
                arr[j] == 'u' || arr[j] == 'U') {
                for (int k = j; k < len; k++) {
                    arr[k] = arr[k + 1];
                }
                len--;
                j--;
            }
        }
        cout<<arr<<endl;
    }
    return 0;
}
