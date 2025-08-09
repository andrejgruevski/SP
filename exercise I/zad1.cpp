//
// Created by Huhee on 8/8/2025.
//
#include "iostream"
using namespace std;

int main(){
    int grade;
    float sum = 0;
    for (int i =0; i<5; i++)
    {
        cin>>grade;
        sum+=grade;
    }
    float avg = sum/5.0;

    cout<<"Average grade: "<<avg<<endl;
    return 0;
}