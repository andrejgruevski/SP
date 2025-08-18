//
// Created by Huhee on 8/18/2025.
//
// Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.
#include "iostream"
#include "cstring"
#include "sstream"
using namespace std;
int function(string &strinigche) {
    int counter  = 0; // tuka ke go chuvame brojot na svrznici
    int tekoven = 0; // so tekovniot proveruvame dali zborot e svrznik ili ne

    for (char ch : strinigche) { // for koj ni odi niz sekoj zbor vo stringot
        if (isalpha(ch)) {
            tekoven++;
        }else {
            if (tekoven >=1 && tekoven<=3) {
                counter++;
            }
            tekoven = 0;
        }
    }
    if (tekoven >=3 && tekoven<=3) counter++; // na krajot ako nizata zavrshva so bukva proveri pak
    return counter;
}
int main (){
    string str;
    string max;
    int counter = -1 ;
    while (getline(cin,str)) {
        if (function(str) > counter) {
            counter = function(str);
            max = str;
        }
    }
    if (counter >=0) {
        cout<<counter<<": "<<max<<endl;
    }

    return 0;
}
