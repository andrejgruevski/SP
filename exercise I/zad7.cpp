//
// Created by Huhee on 8/14/2025.
//
#include "iostream"
using namespace std;
int main () {
    int broj;
    cin>>broj;

    int edinica = broj % 10;
    int desetka = (broj / 10) % 10;
    int stotka = (broj/100) %10;

    bool flag;
    if (edinica % 2 == 0) {
        flag = true;
    }else {
        flag = false;
    }
    cout<<"Vrednosta na stotki, desetki i edinici e: "<<stotka<<","<<desetka<<","<<edinica<<endl;
    cout<<"Vredonsta na promenlivata ediniciParenBroj e "<<flag;
    return 0;
}