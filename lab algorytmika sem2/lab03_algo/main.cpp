#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
using namespace std;

struct student {
    string imie;
    string nazwisko;
    int punkty;
};
void wczytajStudentow(student*& tab, int n) //zczytanie z pliku studentow
{
    tab = new student[n];

    ifstream dane("studenci.csv");
    if(!dane.is_open())
    {
        cout<<"blad pliku"<<endl;
        exit(1);
    }

    string wiersz;
    getline(dane, wiersz);  // pomijamy pierwsz¹ linijkê

    int i = 0;
    //while(getline(dane, wiersz))
    for(int i=0;i<n;i++)
    {
        getline(dane,wiersz);
        string imie, nazwisko, punkty_str;
        int punkty;

        size_t pozycja1 = wiersz.find(';'); //arg 1: co szukamy, arg 2: gdzie zaczac szukac
        size_t pozycja2 = wiersz.find(';', pozycja1 + 1);

        imie = wiersz.substr(0, pozycja1);
        nazwisko = wiersz.substr(pozycja1 + 1, pozycja2 - pozycja1 - 1);
        punkty_str = wiersz.substr(pozycja2 + 1);

        punkty = stoi(punkty_str);

        tab[i].imie = imie;
        tab[i].nazwisko = nazwisko;
        tab[i].punkty = punkty;

        //i++;
    }

    dane.close();
}

//void wczytajStudentow(student*& tab, int n) {
//    ifstream plik("studenci.csv");
//    if (!plik.is_open()) {
//        cout << "Nie udalo sie otworzyc pliku!" << endl;
//        exit(1);
//    }
//
//    tab = new student[n];
//    for(int i=0; i<n; i++) {
//        getline(plik, tab[i].imie, ';');
//        getline(plik, tab[i].nazwisko, ';');
//        plik >> tab[i].punkty;
//        plik.ignore(numeric_limits<streamsize>::max(), '\n');
//    }
//
//    plik.close();
//}

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
    int n;
    cout << "Podaj liczbe studentow: ";
    cin >> n;

    student* tab;
    wczytajStudentow(tab, n);

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
