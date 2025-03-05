#include <iostream>

using namespace std;

int main()
{
    /*int i =100;
     while (i >=1) {
        cout << i-- << endl;
     }*/
     /*
     napisi program koji ispise brojeve od a do b
     a i b unosi korisnik. a<b i ne treba probjeravati i koristi while petlju*/
     /*int a, b;

    cout << "Unesite broj a: ";
    cin >> a;
    cout << "Unesite broj b: ";
    cin >> b;

    while (a <= b) {
        cout << a++ << endl;
    }*/
    /*
    napisi program koji ispise najmanji brij koji je unio
    korsnik. brojevi se unose tako dugo dok ne unesemo broj nula*/
    /*int broj, najmanji;

    cout << "Unesite brojeve (unos se završava unosom broja 0): ";
    cin >> broj;

    if (broj == 0) {
        cout << "Niste uneli nijedan broj." << endl;
        return 0;
    }

    najmanji = broj;
    while (broj != 0) {
        if (broj < najmanji) {
            najmanji = broj;
        }
        cin >> broj;
    }

    cout << "Najmanji broj koji ste unijeli je: " << najmanji << endl;*/
    /*int najmani=0;
    int unesen;
    cin>>najmanji;
    while(1){
        cin>>uneseni;
        if( uneseni===)
            break;
        if (uneseni<najmanji)
            najmanji=uneseni;
    }*/
    /*napisi program kiji ispise svaki treci broj od uneseng broja do broja koji je 134 puta veci od unesenog*/
    /*int a;

    cout << "Unesi neki broj: ";
    cin >> a;

    int b = a * 134;

    while (a <= b) {
        cout << a << endl;
        a += 3;
    }*/
    /*int a;
    cin>>a;
    int b=134*a
    while (a<b) {
        cout<<a<<endl;
        a+=3;
    }*/
    /*napisi program koji ispise najmanji parni uneseni broj, brojevi se unose tako dugo dok se ne uneseb broj 666*/
    /*int najmanji;
    int uneseni;
    bool prvi=1;
    while (1) {
        cin>>uneseni;
        if (uneseni == 666)
            break;
        if (uneseni %2 == 0){
            if (prvi ==1){
                najmanji=uneseni;
                prvi=0;
            }
        else
            if(uneseni<najmanji)
            najmanji=uneseni;
        }
    }*/
    /*napisi program koji ispise sve znamenke nekog unesenog broja. nepoznati je broj znamenaka broja.redoslijed znamenaka nije bitan*/
    return 0;
}
