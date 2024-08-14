#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
using namespace std;


void przydzielPamiec1D(int *&tab, int n) {
    tab = new int[n];
}


void przydzielPamiec2D(int **&tab, int w, int k) {
    tab = new int *[w];
    for (int i = 0; i < w; i++) {
        tab[i] = new int[k];
    }
}


void wypelnijTablice1D(int *tab, int n, int a, int b) {
    srand(time(nullptr)); // ustawienie ziarna dla funkcji rand()
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % (b-a+1) + a;
    }
}


void wypelnijTablice2D(int **tab, int w, int k, int a, int b) {
    srand(time(nullptr)); // ustawienie ziarna dla funkcji rand()
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            tab[i][j] = rand() % (b-a+1) + a;
        }
    }
}


void usunTablice1D(int *&tab) {
    delete[] tab;
    tab = nullptr;
}


void usunTablice2D(int **&tab, int w) {
    for (int i = 0; i < w; i++) {
        delete[] tab[i];
    }
    delete[] tab;
    tab = nullptr;
}


void wyswietl1D(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}


void wyswietl2D(int** tab, int w, int k) {
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout<<tab[i][j]<<" ";
        }
        cout << endl;
    }
}

int sumaCyfr(int liczba){
    int suma=0;
        while(liczba>0){
            suma+=liczba%10;
            liczba/=10;}
    return suma;}


void srednia(int** tab,int w, int k){
double srednia_pod=0;
double srednia_nad=0;
int licznik_pod=0;
int licznik_nad=0;
int i,j;
for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
            if (i < j) {srednia_nad+=tab[i][j];
            licznik_nad++;
}else if(i>j){
srednia_pod+=tab[i][j];
licznik_pod++;}
        }}
        if (licznik_nad>0){
            srednia_nad/=licznik_nad;
        }
        if(licznik_pod>0){
            srednia_pod/=licznik_pod;
        }
cout<<"srednia nad przekatna wynosi: "<<srednia_nad<<endl;
cout<<"srednia pod przekatna wynosi: "<<srednia_pod<<endl;}



bool czy_pierwsza(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}




int main()
{int menu;
while (true){
int n,a,b,i;
cout<<"\n";
cout<<"wybierz program:"<<endl;
cout<<"1 - Minimalny element"<<endl;
cout<<"2 - Zliczanie elementow w tablicy"<<endl;
cout<<"3 - Maksymalny element"<<endl;
cout<<"4 - kwadratowa tablica"<<endl;
cout<<"5 - wyjscie z programu"<<endl;
cin>>menu;

    switch(menu){
case 1: {
    srand(time(NULL));
cout<<"wybrany program: Minimalny element"<<endl;


cout<<"podaj rozmiar tab: ";
cin>>n;
int *tab1;
przydzielPamiec1D(tab1,n);
cout<<"podaj przedzial: ";
cin>>a;cin>>b;
cout<<"podany przedzial: "<<a<<";"<<b<<endl;
wypelnijTablice1D(tab1,n,a,b);
cout<<"Tablica: "<<endl;
wyswietl1D(tab1,n);
int min=tab1[0];
for(i=0;i<n;i++){
    if (min>tab1[i]){
        min=tab1[i];
    }

}
cout<<"minimalna: "<<min<<endl;
if (czy_pierwsza(min)){
    cout<<"liczba "<<min<<" jest pierwsza";
}
else{cout<<"Liczba "<<min<<" NIE jest liczba pierwsza";}
break;}
case 2:{
    srand(time(NULL));
cout<<"wybrany program: Zliczanie elementow w tablicy"<<endl;


cout<<"podaj rozmiar tab: ";
cin>>n;
int tab2[n];
for (i=0;i<n;i++){
    tab2[i]=rand()%(9-1)+0;
}
for(i=0;i<n;i++){
    cout<<tab2[i]<<endl;
}

   map<int, int> elementCount;

    for (auto i : tab2) {
        elementCount[i]++;
    }

    for (auto it : elementCount) {
        cout << "Cyfra " << it.first << " wystepuje " << it.second << " razy." << endl;
    }


   } break;

 case 3:{
     int w,k;
     cout<<"Wybrano: Maksymalny element"<<endl;
     cout<<"podaj wymiary tablicy:"<<endl
     <<"w: ";
     cin>>w;
     cout<<"k: ";
     cin>>k;

     cout<<"podaj przedzial liczb:"<<endl
     <<"a: ";
     cin>>a;
     cout<<"b: ";
     cin>>b;
     int **tab3;
     przydzielPamiec2D(tab3,w,k);
     wypelnijTablice2D(tab3,w,k,a,b);
        cout << "Tablica: " << endl;
    wyswietl2D(tab3, w, k);

    int max = tab3[0][0];
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            if (tab3[i][j]>max){
                max = tab3[i][j];
            }
        }
    }
    int suma=sumaCyfr(max);
    cout<<"najwiekszy element: "<<max<<endl;
    cout<<"suma cyfr najwiekszego elementu: "<<suma<<endl;
    break;

 }
 case 4: {
 int w,a=7,b=122;


 cout<<"podaj rozmiar kwadratowej tablicy: ";
 cin>>w;
 int **tab4;
 przydzielPamiec2D(tab4,w,w);
 wypelnijTablice2D(tab4,w,w,a,b);
 wyswietl2D(tab4,w,w);
srednia(tab4,w,w);
break; }
 case 5:{cout<<"WYJSCIE Z PROGRAMU"<<endl;return EXIT_SUCCESS;}
 return 0;
}}}


