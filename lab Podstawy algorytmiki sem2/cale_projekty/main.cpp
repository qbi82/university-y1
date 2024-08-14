#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
#include<sstream>
using namespace std;

struct student {
    string imie;
    string nazwisko;
    int punkty;
};



int wczytajStudentow(student*& tab) {
    string sciezka,linia,pomoc;
    int liczbaStudentow;
    ifstream plik;
    sciezka=("studenci.csv");
    char sredniki;
    plik.open(sciezka);
    plik>>liczbaStudentow;
    tab = new student[liczbaStudentow];
    for(int i=0;i<2;i++){
        plik>>sredniki;}

    for(int i=0; i<liczbaStudentow; i++) {
            plik>>linia;
    stringstream ss(linia);
        getline(ss, tab[i].imie, ';');
        getline(ss, tab[i].nazwisko, ';');
        getline(ss,pomoc);
        tab[i].punkty=atoi(pomoc.c_str());}


    plik.close();
    return liczbaStudentow;
}

void usunTabliceStudentow(student*& tab) {
    delete[] tab;
    tab = nullptr;
}

void wyswietlStudentow(student* tab, int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i].imie << " " << tab[i].nazwisko << " " << tab[i].punkty << endl;
    }
}

void sortowanieQuickSort(student* tab, int n, int tryb) {
    if (n <= 1) {
        return;
    }

    int pivot = tab[n / 2].punkty;
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (tryb == 0) {
            while (tab[i].punkty < pivot) {
                i++;
            }
            while (tab[j].punkty > pivot) {
                j--;
            }
        }
        else {
            while (tab[i].punkty > pivot) {
                i++;
            }
            while (tab[j].punkty < pivot) {
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

int main() {

    student* tab;
    int n=wczytajStudentow(tab);
    cout << "Przed sortowaniem:" << endl;
    wyswietlStudentow(tab, n);

    int tryb;
    cout << "Wybierz tryb sortowania (0 - rosnaco, 1 - malejaco): ";
    cin >> tryb;
    sortowanieQuickSort(tab, n, tryb);

    cout << "Po sortowaniu:" << endl;
    wyswietlStudentow(tab, n);

    usunTabliceStudentow(tab);
    return 0;
}
