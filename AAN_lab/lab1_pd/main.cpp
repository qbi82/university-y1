#include <iostream>
#include <vector>

using namespace std;

double Horner(const vector<double>& a, double x) {
    int n = a.size() - 1;
    double wynik = a[n];
    for (int i = n - 1; i >= 0; i--) {
        wynik = wynik * x + a[i];
    }
    return wynik;
}

vector<double> Pochodna(const vector<double>& a) {
    int n = a.size() - 1;
    vector<double> pochodna(n);

    for (int i = 0; i < n; i++) {
        pochodna[i] = a[i + 1] * (i + 1);
    }
    return pochodna;
}

vector<double> NtaPochodna(const vector<double>& a, int n) {
    vector<double> wynik = a;
    for (int i = 0; i < n; i++) {
        wynik = Pochodna(wynik);
    }
    return wynik;
}

int main() {
    int stopien;
    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    vector<double> a(stopien + 1);
    for (int i = stopien; i >= 0; i--) {
        cout << "Podaj wspolczynnik przy x^" << i << ": ";
        cin >> a[i];
    }

    double x;
    cout << "Podaj punkt: ";
    cin >> x;

    double wynik = Horner(a, x);
    cout << "Wartosc wielomianu w punkcie " << x << " wynosi: " << wynik << endl;

    for (int i = 1; i <= stopien; i++) {
        vector<double> pochodna = NtaPochodna(a, i);
        double pochodnaWartosc = Horner(pochodna, x);
        cout << "Pochodna " << i << "-tego stopnia w punkcie " << x << " wynosi: " << pochodnaWartosc << endl;
    }

    return 0;
}
