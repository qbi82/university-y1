#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void przydzielPamiec1D(int *&tab, int n);
void przydzielPamiec2D(int *&tab,int w, int k);
void wypelnijTablice1D(int *tab,int n, int a,int b);
void wypelnijTablice2D(int **tab,int w, int k, int a, int b);
void usunTablice1D(int *&tab);
void usunTablice2D(int **&tab, int w);
void wyswietl1D(int* tab, int n);
void wyswietl2d(int** tab,int w,int k);

int main()
{int menu;
int n,a,b,i;
cout<<"wybierz program:"<<endl;
cin>>menu;
    switch(menu){
case 1:
    srand(time(NULL));
cout<<"wybrany program: Minimalny element"<<endl;


cout<<"podaj rozmiar tab: ";
cin>>n;
cout<<"podaj przedzial: ";
cin>>a;
cin>>b;
cout<<"podany przedzial: "<<a<<";"<<b<<endl;
int tab1[n];

for(i=0;i<n;i++){
    tab1[i]=rand()%(b-a+1)+a;
}for(i=0;i<n;i++){
cout<<tab1[i]<<endl;}
int min=tab1[0];
for(i=0;i<n;i++){
    if (min>tab1[i]){
        min=tab1[i];
    }

}
cout<<"minimalna: "<<min<<endl;
if ((min%2!=0)&&(min%3!=0)&&(min%5!=0)) {
    cout<<"pierwsza";
}
else{cout<<"nie pierwsza";}
    break;
case 2:
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
    break;
 }   return 0;
}



