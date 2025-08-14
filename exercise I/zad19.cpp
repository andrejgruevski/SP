//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;

double discount ( double grams, double price) {
    double basePrice = (grams/100.0) * price;
    if (grams >= 500) return basePrice * 0.5;
    if (grams >= 200) return basePrice * 0.7;
    return basePrice;
}
int main() {
    int jabolka, malini, banani;
    int card;
    cin >> jabolka >> malini >> banani >> card;

    double sum = 0;
    sum+=discount(jabolka,30);
    sum+=discount(malini,50);
    sum+=discount(banani,40);
    if (card == 1)cout<<sum-140;
    else cout<<sum;

    // if (jabolka >= 500) {
    //     suma += ((jabolka / 100) * 30) * 0.5;
    // }
    // else if (jabolka >= 200) {
    //     suma += ((jabolka / 100) * 30) * 0.7;
    // }
    // else {
    //     suma += ((jabolka / 100) * 30);
    // }
    //
    // if (malini >= 500) {
    //     suma += ((malini / 100) * 50) * 0.5;
    // }
    // else if (malini >= 200) {
    //     suma += ((malini / 100) * 50) * 0.7;
    // }
    // else {
    //     suma += ((malini / 100) * 50);
    // }
    //
    // if (banani >= 500) {
    //     suma += ((banani / 100) * 40) * 0.5;
    // }
    // else if (banani >= 200) {
    //     suma += ((banani / 100) * 40) * 0.7;
    // }
    // else {
    //     suma += ((banani / 100) * 40);
    // }
    // if (card == 1) {
    //     cout << suma - 140;
    // }
    // else {
    //     cout << suma;
    // }


    return 0;
}
