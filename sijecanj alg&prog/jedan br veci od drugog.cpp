#include <iostream>

using namespace std;

int main()
{
    int broj;
    int sto;
    int jedinica;
    int rezultat;
    scanf("broj je %i", &broj);
    sto=broj/100;
    jedinica=broj%10;
    rezultat=sto-jedinica;
    cout<<"stotica je veca od jedinice "<<rezultat<<" puta";


    return 0;
}
