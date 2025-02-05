#include <iostream>

using namespace std;

int main()
{
    /* napisi program koji ispise je li broj
    negativan ili pozitivan

    napisi program koji ispise je li broj paran ili neparan

    napisi program koji ispise jesu li dva ucitana znaka ucitana abecednim redom

    napisi program koji ipise cijelinu proizvoda s PDVom

    napisi program koji izracuna
    R za uneseni U i I
    U za uneseni R i I
    I za uneseni R i U
    korisnik unosi 'R', 'U', 'I' te ostale vrijednosti
    */
    /*int bodovi;
    int gb5;
    int gb4;
    int gb3;
    int gb2;
    cout<< "Unesi broj bodova";
    cin>> bodovi;
    cin>> gb5;
    cin>> gb4;
    cin>> gb3;
    cin>> gb2;
    if (bodovi>=gb5){
        cout<< "Ocjena je petica";
    }
     else if (bodovi < gb5 && bodovi > gb4)
     cout<< "Ocjena je cetvorka";
     else if (bodovi < gb4 && bodovi > gb3)
     cout<< "Ocjena je trojka";
     else if (bodovi < gb3 && bodovi > gb2)
     cout<< "Ocjena je dvojka";
     else if (bodovi < gb2)
     cout<< "Nedovoljan";
    return 0;*/



    /*int broj;
    cout << "Unesi broj: ";
    cin >> broj;
    if (broj > 0) {
        cout << "Broj je pozitivan." << endl;
    } else if (broj < 0) {
        cout << "Broj je negativan." << endl;
    } else {
        cout << "Broj je nula." << endl;
    }*/

    /*int broj;
    cout<< "Unesi broj";
    cin>> broj;
    if (broj % 2 = 0){
        cout<< "Broj je paran"; <<endl;
    } else {
    cout<< "Broj je neparan" <<endl;
    }*/
    /*float cijenaBezPDV;
    cin>>cijenaBezPDV;
    float cijenaSPDV;
    cijenaSPDV=cijenaBezPDV*1.25;*/
    /*char opcija;
    float U, I, R;

    printf("Unesi koji parametar zelis izracunati (R - otpor, U - napon, I - struja): ");
    scanf(" %c", &opcija);

    if (opcija == 'R' ) {

        printf("Unesi napon (U): ");
        scanf("%f", &U);
        printf("Unesi struju (I): ");
        scanf("%f", &I);

        if (I != 0) {
            R = U / I;
            printf("Otpor (R) je: %.2f Ohm\n", R);
        } else {
            printf("Struja ne moze biti nula!\n");
        }

    } else if (opcija == 'U' || opcija == 'u') {

        printf("Unesi otpor (R): ");
        scanf("%f", &R);
        printf("Unesi struju (I): ");
        scanf("%f", &I);

        U = I * R;
        printf("Napon (U) je: %.2f Volt\n", U);

    } else if (opcija == 'I' || opcija == 'i') {

        printf("Unesi napon (U): ");
        scanf("%f", &U);
        printf("Unesi otpor (R): ");
        scanf("%f", &R);

        if (R != 0) {
            I = U / R;
            printf("Struja (I) je: %.2f Ampere\n", I);
        } else {
            printf("Otpor ne moze biti nula!\n");
        }

    } else {
        printf("Nevažeæa opcija!\n");
    }*/
    /*char znak1, znak2;

    cout << "Unesi prvi znak: ";
    cin >> znak1;
    cout << "Unesi drugi znak: ";
    cin >> znak2;

    if (znak1 < znak2) {
        cout << "Znaci jesu u abecednom redu." << endl;
    } else if (znak1 > znak2) {
        cout << "Znaci nisu u abecednom redu." << endl;
    }*/
    /*napisi program koji ispise ukupni otpor
    jednostavnog strujnog kruga za dva otpora.
    Unosi se na nacin spoja;
    'p' za paralelni spoj
    's' za serijski spoj
    te vrijednosti dva otpora (integera)*/

    /*char odabir;
    int v1;
    int v2;
    scanf("%c %i %i", &odabir, &v1, &v2);
    if ( c=='R'){
        int U=v1;
        int I=v2;
        int R=U/I;
        printf ("Otpor (R) je %i Ohm/n")
    }
    else ( c=='U'){
        int R=v1;
        int I=v2;
        int U=R/I;
    }
    else ( c=='I'){
        int U=v1;
        int R=v2;
        int I=U/R;
    }*/
    /*char spoj;
    int R1, R2;
    float R;

    cout << "Unesi vrstu spoja (p za paralelni, s za serijski): ";
    cin >> spoj;
    cout << "Unesi vrijednosti dva otpora (R1 i R2): ";
    cin >> R1 >> R2;

    if (spoj == 's') {
        R = R1 + R2;
        cout << "Ukupni otpor za serijski spoj je: " << R << " Ohm" << endl;
    }

    if (spoj == 'p') {
        if (R1 == 0) {
            cout << "Paralelni spoj s prvim otporom nula nije moguæe!" << endl;
        } else if (R2 == 0) {
            cout << "Paralelni spoj s drugim otporom nula nije moguæe!" << endl;
        } else {
            R = 1 / (1.0 / R1 + 1.0 / R2);
            cout << "Ukupni otpor za paralelni spoj je: " << R << " Ohm" << endl;
        }
    }*/
}

