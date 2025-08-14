//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main() {

    int p1,p2,p3,p4,p5;
    cin>>p1>>p2>>p3>>p4>>p5;

    int points = p1+p2+p3+p4+p5;

    if (points<50) {
        cout<<"Predmetot ne e polozen";
    }else if (points > 51 && points <= 60) {
        cout<<"Ocenka: 6, poeni: "<<points<<endl;
        if (points == 60) {
            cout<<"Ima uslov za povisoka ocenka";
        }else {
            cout<<"Nema uslov za povisoka ocenka";
        }
    }else if (points > 61 && points <= 70) {
        cout<<"Ocenka: 7, poeni: "<<points<<endl;
        if (points == 70) {
            cout<<"Ima uslov za povisoka ocenka";
        }else {
            cout<<"Nema uslov za povisoka ocenka";
        }
    }else if (points > 71 && points <= 80) {
        cout<<"Ocenka: 8, poeni: "<<points<<endl;
        if (points == 80) {
            cout<<"Ima uslov za povisoka ocenka";
        }else {
            cout<<"Nema uslov za povisoka ocenka";
        }
    }else if (points > 81 && points <= 90) {
        cout<<"Ocenka: 9, poeni: "<<points<<endl;
        if (points == 90) {
            cout<<"Ima uslov za povisoka ocenka";
        }else {
            cout<<"Nema uslov za povisoka ocenka";
        }
    }else if (points > 91 && points <= 100) {
        cout<<"Ocenka: 10, poeni: "<<points<<endl;

    }
    return 0;
}