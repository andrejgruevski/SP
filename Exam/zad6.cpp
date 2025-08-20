//
// Created by Huhee on 8/19/2025.
//
// da se vnesat n nizi od karakteri i da se najde najgolemata niza od niv.I vo nejze ako ja ima bukvata 's' ke se zameni so '$', a bukvata 'm' ke se zameni so '^^'
#include "iostream"
#include "cstring"

using namespace std;
int main() {

    int n;
    char array[80];
    cin>>n;
    cin.ignore();
    char largest[80];
    for (int i =0; i<n; i++) {
        cin.getline(array,80);
        if (strlen(array) > strlen(largest)) {
            strcpy(largest,array);
        }
    }
    for (int i =0; i<strlen(largest); i++) {
        if (largest[i]=='S' || largest[i] =='s') {
            cout<<"$";
        }else if (largest[i] == 'M' || largest[i] == 'm') {
            cout<<"^^";
        }else {
            cout<<largest[i];
        }
    }

    return 0;
}