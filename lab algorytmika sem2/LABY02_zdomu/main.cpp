#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void sortowanieBabelkowe(int* tab, int n, int tryb);
void sortowaniePrzezWybor(int* tab, int n, int tryb);
void sortowaniePrzezWstawianie(int* tab, int n, int tryb);
void sortowanieBabelkowe2D(int** tab, int w, int k, int tryb, int nrKol);
void wypelnijTablice(int * tab,int n,int a,int b);
void wyswietlTablice1D(int* tab, int n);
void wyswietlTablice2D(int** tab,int w,int k);
void wypelnijTablice2D(int** tab,int w,int k,int a,int b);
void sortowanieBabelkowe2D(int** tab, int w, int k, int tryb, int nrKol);
void usunTablice(int** tab);
int main()
{while (true){
    int wybor = 0;

        cout << "Wybierz opcje:" << endl;
        cout << "1) Sortowanie babelkowe" << endl;
        cout << "2) Sortowanie przez wybor" << endl;
        cout << "3) Sortowanie przez wstawianie" << endl;
        cout << "4) Sortowanie tablicy dwuwymiarowej" << endl;
        cout << "5) Wyjscie z programu" << endl;
        cin >> wybor;

        switch (wybor)
        {
            case 1:
            {
    int n, a, b, tryb;

    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    cout << "Podaj przedzial <a,b> z ktorego maja byc losowane liczby: ";
    cin >> a >> b;

    cout << "Wybierz tryb sortowania (1 - rosnaco, 2 - malejaco): ";
    cin >> tryb;

    int* tablica = new int[n]; // alokacja pamięci na tablicę

    wypelnijTablice(tablica, n, a, b);

    cout << "Tablica przed sortowaniem:\n";
    wyswietlTablice1D(tablica, n);

    sortowanieBabelkowe(tablica, n, tryb);

    cout << "Tablica po sortowaniu:\n";
    wyswietlTablice1D(tablica, n);

    delete[] tablica;break; // zwolnienie pamięci
}
            case 2:
                {
      int n, a, b, tryb;

    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    cout << "Podaj przedzial <a,b> z ktorego maja byc losowane liczby: ";
    cin >> a >> b;

    cout << "Wybierz tryb sortowania (1 - rosnaco, 2 - malejaco): ";
    cin >> tryb;

    int *tab =new int[n];
    wypelnijTablice(tab,n,a,b);
    cout << "Tablica przed sortowaniem: "<<endl;
    wyswietlTablice1D(tab, n);

    sortowaniePrzezWybor(tab,n,tryb);
    cout << "Tablica po sortowaniu:\n";
    wyswietlTablice1D(tab, n);
            delete[] tab;break;    }

            case 3:
                {
                    int n, a, b, tryb;

    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    cout << "Podaj przedzial <a,b> z ktorego maja byc losowane liczby: ";
    cin >> a >> b;

    cout << "Wybierz tryb sortowania (1 - rosnaco, 2 - malejaco): ";
    cin >> tryb;

    int *tab =new int[n];
    wypelnijTablice(tab,n,a,b);
    cout << "Tablica przed sortowaniem: "<<endl;
    wyswietlTablice1D(tab, n);

    sortowaniePrzezWstawianie(tab,n,tryb);
    cout << "Tablica po sortowaniu:\n";
    wyswietlTablice1D(tab, n);
            delete[] tab; break;   }

            case 4:
    {
        int tryb,w,k,nrKol;
        int **tab=nullptr;
    cout << "Podaj liczbe wierszy: ";
    cin >> w;

    cout << "Podaj liczbe kolumn: ";
    cin >> k;

    cout << "Wybierz tryb sortowania (1 - rosnaco, 2 - malejaco): ";
    cin >> tryb;

    cout << "Podaj numer kolumny, wzgledem ktorej sortowac: ";
    cin >> nrKol;

    int a, b;
    cout << "Podaj przedzial <a,b> z ktorego maja byc losowane liczby: ";
    cin >> a >> b;

     tab = new int* [w];
    for (int i = 0; i < w; i++) {
        tab[i] = new int[k];}

    wypelnijTablice2D(tab,w,k,a,b);

    cout<<"Tablica przed posortowaniem :"<<endl;
    wyswietlTablice2D(tab,w,k);

    sortowanieBabelkowe2D(tab,w,k,tryb,nrKol-1);
    cout<<"Tablica po posortowaniu :\n";
    wyswietlTablice2D(tab,w,k);
    usunTablice(tab);
    break;}
            case 5:
                cout<<"\t\tWYJSCIE Z PROGRAMU";
                return EXIT_SUCCESS;
        }
    }}
void wyswietlTablice2D(int** tab,int w,int k){
for(int i=0;i<w;i++){
for(int j=0;j<k;j++){
    cout<<tab[i][j]<<" ";}
    cout<<endl;}
}
void wypelnijTablice2D(int** tab,int w,int k,int a,int b){
    srand(time(NULL));
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            tab[i][j]=rand()%(b-a+1)+a;
        }
    }
}
void sortowanieBabelkowe(int* tab, int n, int tryb){
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if((tryb == 1 && tab[j] > tab[j+1]) || (tryb == 2 && tab[j] < tab[j+1]))
            {
                swap(tab[j], tab[j+1]);
            }
        }
    }
}
void sortowaniePrzezWybor(int* tab, int n, int tryb) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (tryb == 1) {
                if (tab[j] < tab[minIndex]) {
                    minIndex = j;
                }
            }
            else if (tryb == 2) {
                if (tab[j] > tab[minIndex]) {
                    minIndex = j;
                }
            }
        }
        swap(tab[i], tab[minIndex]);
    }
}
void sortowaniePrzezWstawianie(int* tab, int n, int tryb) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = tab[i];
        j = i - 1;
        if (tryb == 1) {
            while (j >= 0 && tab[j] > key) {
                tab[j+1] = tab[j];
                j--;
            }
        }
        else if (tryb == 2) {
            while (j >= 0 && tab[j] < key) {
                tab[j+1] = tab[j];
                j--;
            }
        }
        tab[j+1] = key;
    }
}
void sortowanieBabelkowe2D(int** tab, int w, int k, int tryb, int nrKol){
        if(tryb == 1){
            for(int i=0;i<w;i++){
                for(int j=0;j<k;j++){
                    if(tab[j][nrKol]>tab[j+1][nrKol]){
                        for(int l=0;l<k;l++){
                            int temp=tab[j][l];
                            tab[j][l]=tab[j+1][l];
                            tab[j+1][l]=temp;
                        }}}}}
            if(tryb==2){
            for(int i=0;i<w;i++){
                for(int j=0;j<k;j++){
                    if(tab[j][nrKol]<tab[j+1][nrKol]){
                        for(int l=0;l<k;l++){
                            int temp=tab[j][l];
                            tab[j][l]=tab[j+1][l];
                            tab[j+1][l]=temp;
                        }}}}}}

void wypelnijTablice(int * tab,int n,int a,int b){
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%(b-a+1)+a;
    }
}
void wyswietlTablice1D(int* tab, int n){
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}
void usunTablice(int **tab){
delete[] tab;}
