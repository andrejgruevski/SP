//
// Created by Huhee on 8/20/2025.
//
#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int niza[100];
    int k = 0;

    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            niza[k++] = arr[i] * 10 + arr[i + 1];
        }
        else {
            niza[k++] = arr[i];
        }
    }

    for (int i = 0; i < k; i++) {
        bool prost = true;

        if (niza[i] <= 1) prost = false;
        else {
            for (int d = 2; d * d <= niza[i]; d++) {
                if (niza[i] % d == 0) {
                    prost = false;
                    break;
                }
            }
        }

        if (prost) {
            cout << "brojot " << niza[i] << " e prost" << endl;
        }
        else {
            cout << "brojot " << niza[i] << " NE e prost" << endl;
        }
    }

    return 0;
}
