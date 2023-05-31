#include <iostream>
#include <prostokat.h>
#include "organizm.h"

using namespace std;

void drukujOrganizm(const Organizm &o){
    cout << "Licznik życia: " << o.stanLicznikaZycia() << endl
         << "Licznik posilkow: " << o.stanLicznikaPosilkow() << endl
         << "Limit posiłków: " << o.limitPosilkow << endl
         << "Koszt potomka: " << o.kosztPotomka << endl
         << "Głodny: " << o.glodny() << endl
         << "Pączkujący: " << o.paczkujacy() << endl << endl;
}

int main()
{
    Sasiedztwo sasiedztwo;
    sasiedztwo.okreslSasiada(P,GLON);
    sasiedztwo.okreslSasiada(PG,GRZYB);
    sasiedztwo.okreslSasiada(g,GRZYB);
    sasiedztwo.okreslSasiada(LG,GLON);
    sasiedztwo.okreslSasiada(L,BAKTERIA);
    sasiedztwo.okreslSasiada(LD,BAKTERIA);
    sasiedztwo.okreslSasiada(D,GLON);
    sasiedztwo.okreslSasiada(PD,PUSTKA);
    cout<<"Przeglad sasiedztwa: "<<endl;
    for(int=0;i<8;i++){
        Polozenie p= static_cast<Polozenie>(i);
        RodzajMieszkanca
                r=sasiedztwo.ktoJestSasiadem(p);
        cout<<"polozenie="<<p<<" rodzaj="<< nazwaRodzaju(r)<<endl;
    }
    cout<<endl<<"Policzenie sasiadow"
       <<"okreslonego rodzaju:"<<endl;<<"glony="<<sasiedztwo.ile(GLON)<<endl
       <<" grzyby="<<sasiedztwo.ile(GRZYB)<<endl
      <<" trupy="<<sasiedztwo.ile(TRUP)<<endl;

    cout << endl<<"Wylosowanie sasiada:"<<endl
         <<" glon -> "
        <<sasiedztwo.losujSasiada(GLON)<<endl
       <<" pustka -> "
      << sasiedztwo.losujSasiada(PUSTKA)<<endl
      <<" trup -> "
     <<sasiedztwo.losujSasiada(TRUP)<<endl;

    long wiersz, kolumna;
    cout<<endl
       << "Zmiana indeksow [5][7]"
       << "wg polozenia:"<<endl;


    for(int i = 0;i<8;i++){
        Polozenie p =static_cast<Polozenie>(i);
        wiersz = 5; kolumna = 7;
        Sasiedztwo::
                zmienIdeksyWgPolozenia(p,wiersz,kolumna);
        cout <<" polozenie: "<<p<<" ->["<<wiersz<<"]["<<kolumna<<"]"<<endl;
    }
cout<<endl;
    return 0;
}
