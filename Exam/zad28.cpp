//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
#include "cstring"

int fukcija(char a[]) {
    int counter = 0;
    int current = 0;

    for (int i = 0; i < strlen(a); i++) {
        char ch = a[i];
        if (isalpha(ch)) {
            current++;
        }
        else {
            if (current >= 1 && current <= 3) {
                counter++;
            }
            current = 0;
        }
    }
    if (current >= 3 && current <= 3) counter++;
    return counter;
}

using namespace std;

int main() {
    char a[100];
    char max[100];
    int counter = -1;


    while (cin.getline(a, 100)) {
        if (fukcija(a) > counter) {
            counter = fukcija(a);
            strcpy(max, a);
        }
    }

    if (counter >= 0) {
        cout << counter << ": ";
        for (int i = 0; i < strlen(max); i++) {
            cout << max[i];
        }
    }


    return 0;
}
