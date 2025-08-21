#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();

    // нормализирај поместување (работи и за негативни)
    int k = ((x % 26) + 26) % 26;

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);

        string result;  // празно за секоја линија

        for (size_t j = 0; j < str.length(); j++) {
            char c = str[j];
            if (isalpha(static_cast<unsigned char>(c))) {
                char base = islower(static_cast<unsigned char>(c)) ? 'a' : 'A';
                char shifted = ( (c - base + k) % 26 ) + base;
                result += shifted;
            } else {
                result += c; // небуквени знаци остануваат исти
            }
        }

        cout << result << '\n';
    }

    return 0;
}
