#include <iostream>

using namespace std;

int main()
{
    char slovo1;
    char slovo2;
    int rezultat;
    printf("Unesi prvo slovo:");
    cin>>slovo1;
    printf("Unesi drugo slovo:");
    cin>>slovo2;
    cout<<slovo1 - slovo2<< endl;
    rezultat=slovo1 - slovo2;
    printf("%i - %i = %i, ", slovo1, slovo2, rezultat);

}
