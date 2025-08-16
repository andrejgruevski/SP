//
// Created by Huhee on 8/16/2025.
//
#include <complex>
#include <iomanip>
#include <set>

#include "iostream"
using namespace std;
int main() {

    int n;
    cin>>n;
    float niza[n];

    float sum=0.0;
    for (int i =0; i<n; i++) {
        cin>>niza[i];
        sum+=niza[i];
    }
    float avg = sum /n ;
    float najblizok = niza[0];
    float minRazlika = fabs(niza[0] - avg);

    for (int i = 0; i<n; i++) {
        float min = fabs(niza[i] - avg);
        if (min < minRazlika ) {
            minRazlika = min;
            najblizok = niza[i];
        }
    }
    cout<<fixed<<setprecision(2)<<najblizok;

    return 0;
}