//
// Created by Huhee on 8/22/2025.
//
#include <iostream>
#include <cstring>
#include <cctype>   // isdigit

using namespace std;

void promena(char arr[]) {
    int counter = 0;
    for (int i = 0; i < strlen(arr); ++i) {
        if (!isdigit(arr[i])) {
            arr[counter++] = arr[i];
        }
    }
    arr[counter] = '\0';
}

int main() {
    char arr[100];
    cin.getline(arr, 100);

    promena(arr);

    cout << arr;
    return 0;
}
