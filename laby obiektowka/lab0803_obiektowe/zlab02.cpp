#include "zlab02.h"
#include <iostream>
#include <limits>
#include <typeinfo>
#include <cmath>
using namespace std;

ZLab02::ZLab02()
{

}

void ZLab02::zadanie_2_3()
{
    int a = -3;
    unsigned int b;
    b = 5;

    int int_min = numeric_limits<int>::min();
    int int_max = numeric_limits<int>::max();

    unsigned int unsigned_int_min = numeric_limits<unsigned int>::min();
    unsigned int unsigned_int_max = numeric_limits<unsigned int>::max();

    long int_zakres = static_cast<long long>(int_max) - static_cast<long long>(int_min);

    long unsigned_int_zakres = static_cast<long long>(unsigned_int_max) - static_cast<long long>(unsigned_int_min);


    cout << "zmienna c1 jest typu: " << typeid (a).name() << " ma rozmiar: " << sizeof (a) << " bajtow" << endl <<
            "Zakres tej zmiennej to: " << int_min << " -> " << int_max << ", to oznacza " << int_zakres << " roznych wartosci"
         << endl << "Aktualna wartosc zmiennej to: " << a<<endl<<endl;

    cout << "zmienna c2 jest typu: " << typeid (b).name() << " ma rozmiar: " << sizeof (b) << " bajtow" << endl <<
            "Zakres tej zmiennej to: " << int_min << " -> " << int_max << ", to oznacza " << int_zakres << " roznych wartosci"
         << endl << "Aktualna wartosc zmiennej to: " << b <<endl<<endl;

}

void ZLab02::zadneie_2_4()
{
    int a = 5, b = 3;
    int c = a / b;
    double d = a / b;
    double e = static_cast<double>(a)/static_cast<double>(b);

    cout << "a=" << a << " b=" << b << endl
         << "a/b=" << c << endl
         << " a/b=" << d<< endl
         << "a/b=" << e << endl;
}

void ZLab02::zadanie_2_5()
{
    cout.precision(20);
    double eps = numeric_limits<double>::min();
    cout<<"Dzielenie z dokladnoscia: "<< eps << endl;
    double x,y;
    cout<<"Podaj dzielna: ";
    cin>> x;
    cout<< "Podaj dzielnik: ";
    cin>> y;
    if(fabs(y)> eps)
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
    else
        cout << "dzielnik jest za maly"<< endl;
}

void ZLab02::menu()
{
    unsigned short wybor;

    do{
        cout<<"ktore zadanie chcesz uruchomic?" << endl
           <<"3 -> zadanie 2.3"<< endl
           <<"4 -> zadanie 2.4"<< endl
           <<"5 -> zadanie 2.5"<< endl;
        cin >> wybor;
        }while(wybor < 3 || wybor > 5);

        switch(wybor){
        case 3: zadanie_2_3();break;
        case 4: zadneie_2_4();break;
        case 5: zadanie_2_5();break;
        default: cout << "Nie ma takiego zadania" << endl;
        }
}

void ZLab02::zadanie_2_7()
{
    long liczba1 = 3, liczba2 = -5, liczba3 = 0;

    long *wskaznikDoLong;
    wskaznikDoLong = nullptr;

    cout<<"liczba1="<<liczba1
       <<" liczba2= "<<liczba2
        <<"liczba3="<<liczba3<<endl;
    wskaznikDoLong = &liczba2;
    *wskaznikDoLong = 10;

    cout<<"liczba1="<<liczba1
        <<" liczba2= "<<liczba2
        <<"liczba3="<<liczba3<<endl;
    wskaznikDoLong = &liczba3;
    *wskaznikDoLong = liczba1;


    cout << "liczba1-" << 1iczba1
        <<" liczba2=" << liczba2
        <<" liczba3=" << liczba3 << endl;
    wskaznikDoLong = &liczba1;
    liczba2 = *wskaznikDoLong;
    cout << "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;
}


void ZLab02::zadanie_2_8()
{
    long liczba1 = 3, liczba2 =-5, liczba3 = 0;
cout << "liczba1=" << liczba1
    <<" liczba2=" << liczba2
    <<" liczba3=" << liczba3 << endl;
long & referencjaDoLong = liczba2;
referencjaDoLong = 10;
cout << "liczba1=" << liczba1
<<" liczba2=" << liczba2
<<" liczba3=" << liczba3 << endl;
long & referencjaDoLongInna = liczba3;
referencjaDoLongInna = liczba1;
cout << "liczba1=" << liczba1
<<" liczba2=" << liczba2
<< " liczba3=" << liczba3 << endl;
long & referencjaDoLongKolejna = liczba1;
liczba2 = referencjaDoLongKolejna;
cout << "liczba1=" << liczba1
<<" liczba2=" << liczba2
<<" liczba3=" << liczba3 << endl;
}
#include <random>
void ZLab02::zadanie_2_9()
{
    const short N = 10;
    int tablica [N]:
    
    random_device maszynkaLosujaca;
    uniform_int_distribution<short> dystrybucja(-3,4);
    for(unsigned short i-0; i<N; it+)
        tablica[i] = dystrybucja(maszynkalLosujaca) ;
    for (int j: tablica) cout << j <
    cout << endl;
}

void ZLab02::zadanie_2_10( short min, short max)
{
    const short N = 10;
    int tab[N];
    random_device maszynka;
    uniform_int_distribution<short> dystr(min, max);
    tab[0] = dystr(maszynka) ;

    for (unsigned short i=1; i<N; i++)
        while ((tab[i]=dystr(maszynka) ) < tab[i-1] );
for (int liczba: tab) cout << liczba << " ";
}


void ZLab02::pobierzliczbe()
{
    double x = 0
    bool sukces = true;
    string linia;
    do{
        if(!sukces) cout << "!To ma być liczba." << endl;
        getline(cin, linia);
    try {
        x = stod (linia);
        sukces= true;}
    catch (const invalid_argument&) {
        sukces = false;}
}while( !sukces);
return X;
}








