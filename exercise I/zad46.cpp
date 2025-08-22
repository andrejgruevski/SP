//
// Created by Huhee on 8/22/2025.
//
#include "iostream"
#include "cstring"
using namespace std;

void premesti(char arr[]) {
    for (int i = 0; i < strlen(arr) / 2; i++) {
        arr[i + strlen(arr)/2 + strlen(arr)%2] = arr[i];
    }

}

int main() {
    char arr[100];
    cin.getline(arr, 100);
    cout << arr << endl << endl;
    premesti(arr);
    cout << arr;

    return 0;
}
