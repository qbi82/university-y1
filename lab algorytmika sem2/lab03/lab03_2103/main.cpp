#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<sstream>

using namespace std;
struct student{
    string imie;
    string nazwisko;
    int wiek;
};

void wczytajStudentow(student*& tab, int n) {
    string sciezka,linia,pomoc;
    ifstream plik("studenci.csv");
    char sredniki;
    student* tab;
    if (!plik.is_open()) {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        exit(1);
    }

    plik>>n;
    for(int i=0;i<2;i++){
        plik>>sredniki;
    }

    for(int i=0; i<n; i++) {
            plik>>linia;
    ss(linia);
        getline(ss, tab[i].imie, ';');
        getline(ss, tab[i].nazwisko, ';');
        getline(ss,wiek);
        tab[i].wiek=atoi(wiek.c_str());
    }

    plik.close();
}
void wyswietlStudentow(student*& tab, int n){
for(int i=0;i<n;i++){
cout<<tab[i].imie<<" "<<tab[i].nazwisko<<" "<<tab[i].wiek;
}
}

void sortowanieQuickSort(student* tab, int n, int tryb) {
    if (n <= 1) {
        return;
    }

    int pivot = tab[n / 2].wiek;
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (tryb == 0) {
            while (tab[i].wiek < pivot) {
                i++;
            }
            while (tab[j].wiek > pivot) {
                j--;
            }
        }
        else {
            while (tab[i].wiek > pivot) {
                i++;
            }
            while (tab[j].wiek < pivot) {
                j--;
            }
        }
        if (i <= j) {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    }

    sortowanieQuickSort(tab, j + 1, tryb);
    sortowanieQuickSort(tab + i, n - i, tryb);
}
void usunTabliceStudentow(student *&tab){
delete[] tab;
tab= nullptr;}





int main()
{   int n,tryb;
    cout << "podaj liczbe studentow" << endl;
    cin>>n;
    cout << "wybierz tryb sortowania: 0-rosnaco/ 1-malejaco " << endl;
    cin >> tryb;
    student* tab;
    wczytajStudentow(tab,n);
    wyswietlStudentow(tab,n);
    sortowanieQuickSort(tab,n,tryb);
    wyswietlStudentow(tab,n);
    usunTabliceStudentow(tab);
    return 0;
}


