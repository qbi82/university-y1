#include <iostream>
#include <string>
using namespace std;
void wprowadz_dane(string *tekst,string *wzorzec){
cout << "zadanie 5.1" << endl;
cout << "podaj tekst: ";
fflush(stdin);
    getline(cin, *tekst);
cout << "podaj wzorzec: ";
fflush(stdin);
    getline(cin, *wzorzec);}
void procedure_naiwny(string tekst, string wzorzec) {
    int dlw = wzorzec.length();
    int dlt = tekst.length();
    for (int i = 0; i <= dlt - dlw; i++) {
        bool znaleziony = true;
        for (int j = 0; j < dlw; j++) {
            if (tekst[i + j] != wzorzec[j]) {
                znaleziony = false;
                break;
            }
        }
        if (znaleziony) {
            cout <<"znaleziono wzorzec na indeksie: " << i << endl;
        }
    }
}
void wyznacz_nwp(string wzorzec, int dlw, int nwp[]) {
    int dlug = 0;
    nwp[0] = 0;
    int i = 1;
    while (i < dlw) {
        if (wzorzec[i] == wzorzec[dlug]){
            dlug++;
            nwp[i] = dlug;
            i++;}
        else {
            if (dlug != 0) {
                dlug = nwp[dlug - 1];}
            else {
                nwp[i] = 0;
                i++;}
        }
    }
}
void knut(string tekst, string wzorzec) {
    int dlw = wzorzec.length();
    int dlt = tekst.length();
    int nwp[dlw];
    int i = 0, j = 0;
    wyznacz_nwp(wzorzec, dlw, nwp);  //nwp = najdluzszy wlasciwy prefix
    while (i < dlt) {
        if (wzorzec[j] == tekst[i]) {
            i++;
            j++;}
        if (j == dlw) {
            cout << "znaleziono wzorzec na indeksie: " << i - j<< endl;
            j = nwp[j - 1];}
        else if (i < dlt && wzorzec[j] != tekst[i]) {
            if (j != 0) {
                j = nwp[j - 1];}
            else {
                i++;
}}}
}
void tablicaPrzes(string wzorzec, int *p, int pocz, int kon){
    int n_pocz = (int)pocz;
    int n_kon = (int)kon;
    int i=0;
    while(i<=n_kon-n_pocz){
        p[i]=-1;
        i++;
    }
    i=0;
    while(i<wzorzec.length()){
        p[wzorzec[i]-n_pocz]=i;
        i++;
    }
}
void algorytmBM(string wzorzec, string tekst,int *p,int poczatek){

tablicaPrzes(wzorzec,p,0,255);
    int n_pocz=(int)poczatek;
    int i=0;
    while(i<=tekst.length()-wzorzec.length()){
        int j=wzorzec.length()-1;
        while(j>-1 && wzorzec[j]==tekst[i+j]){
            j--;
        }
        if(j==-1){
            cout<<"znaleziono wzorzec na indeksie: " <<i<<endl;
            i++;
        }
        else{
            i=i+max(1,j-p[tekst[i+j]-n_pocz]);
        }
    }
}
int main() {
string *w_tekst,*w_wzorzec,tekst,wzorzec;
w_tekst=&tekst;
w_wzorzec=&wzorzec;
    while (true) {
int wybor;
        cout << "wybierz program: ";
        cin >> wybor;
        cin.ignore();
        if(wybor==1){
            wprowadz_dane(w_tekst,w_wzorzec);
        }
    if (wybor == 2) {
        cout << "zadanie 5.2" << endl;
        procedure_naiwny(tekst, wzorzec);}
    else if(wybor==3){
        cout<<"zadanie 5.3"<<endl;
        knut(tekst,wzorzec);}
    else if(wybor==4){
        cout<<"zadanie 5.4"<<endl;
        int *p=new int[255];
        algorytmBM(wzorzec,tekst,p,0);
        }
    else if(wybor==5){
        cout<<"ZNAKI ASCII"<<endl;
        for(int i=0;i<128;i++){
            cout<<(char)i<<" "<<i<<endl;
            cout<<(int)i<<" "<<i<<endl;
        }
    }
    }

    return 0;
}
