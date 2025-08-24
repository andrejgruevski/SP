//
// Created by Huhee on 8/24/2025.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[100];
    char largest[100] = "";
    while (cin.getline(a, 100)) {
        if (strcmp(a, "0") == 0) {
            break;
        }
        int counter = 0;

        for (int i = 0; i < strlen(a); i++) {
            if (isdigit(a[i])) {
                counter++;
            }
        }
        if (counter >= 0) {
            if (strlen(a) >= strlen(largest) || (strlen(a) == strlen(largest))) {
                strcpy(largest, a);
            }
        }
    }
    int start = 0;
    int end = 0;
    for (int i = 0; i < strlen(largest); i++) {
        if (isdigit(largest[i])) {
            start = i;
            break;
        }
    }
    int len = strlen(largest);
    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(largest[i])) {
            end = i;
            break;;
        }
    }
    for (int i = start; i <= end; i++) {
        cout << largest[i];
    }
    return 0;
}
