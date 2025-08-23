#include <iostream>
using namespace std;

void shift_with_zeros(int a[], int n) {
    int k = a[0];              // првиот елемент е поместување
    int b[100];                // копија (доволно голема за задачата)
    for (int i = 0; i < n; i++) b[i] = a[i];

    // иницијализирај резултат со 0
    for (int i = 0; i < n; i++) a[i] = 0;

    if (k > 0) {
        if (k >= n) return;    // останува цело 0
        // десно: b[i] оди на a[i + k], додека не излезе од граници
        for (int i = 0; i < n - k; i++) {
            a[i + k] = b[i];
        }
    } else if (k < 0) {
        k = -k;
        if (k >= n) return;    // останува цело 0
        // лево: b[i] оди на a[i - k] за i >= k
        for (int i = k; i < n; i++) {
            a[i - k] = b[i];
        }
    } else {
        // k == 0 → копирај назад
        for (int i = 0; i < n; i++) a[i] = b[i];
    }
}

int main() {
    int m;
    cin >> m;
    int arr[100];
    for (int i = 0; i < m; i++) cin >> arr[i];

    shift_with_zeros(arr, m);

    for (int i = 0; i < m; i++) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';
    return 0;
}
