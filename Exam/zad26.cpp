//
// Created by Huhee on 8/23/2025.
//
#include "iostream"
using namespace std;

bool paren(int a[], int n, int k) {
    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            counter++;
        }
    }
    if (counter % 2 == 0) {
        return true;
    }else {
          return false;
    }

}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = false;
    int najmal = a[0];
    for (int i = 0; i < n; i++) {
        if (paren(a, n, a[i])) {
            if (a[i] < najmal)
                najmal = a[i];
                flag = true;

        }
    }
    if (flag) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << najmal << endl;
    }
    else {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    }

    return 0;
}
