//
// Created by Huhee on 8/9/2025.
//
#include "iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int nulta = n%10;
    int prva = (n/10)%10;
    int vtora = (n/100)%10;
    int treta = (n/1000)%10;
    int chetvrta = (n/10000)%10;

    int parni = nulta+vtora+chetvrta;
    int neparni = prva+treta;
    cout<<"Sumata na cifrite na parnite pozicii e "<<parni<<endl;
    cout<<"Sumata na cifrite na neparnite pozicii e "<<neparni<<endl;



    return 0;
}