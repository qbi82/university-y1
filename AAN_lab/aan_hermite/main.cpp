#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


double silnia(int n) {
    if (n > 1) {
        return n * silnia(n - 1);
    }
    return 1;
}

int main() {
    vector<double> w_w;
    vector<vector<double>> w_p;
    vector<int> k;
    int l_w;
    cout << "Podaj ilosc wezlow: ";
    cin >> l_w;

    for (int i = 0; i < l_w; i++) {
        double w;
        cout << "Podaj wartosc wezla " << i + 1 << ": ";
        cin >> w;
        w_w.push_back(w);
    }

    for (int i = 0; i < l_w; i++) {
        int ki;
        cout << "Podaj krotnosc " << w_w[i] << ": ";
        cin >> ki;
        k.push_back(ki);
    }

    for (int i = 0; i < l_w; i++) {
        vector<double> temp;
        for (int j = 0; j < k[i]; j++) {
            double p;
            cout << "Podaj wartosc " << j << " pochodnej " << w_w[i] << ": ";
            cin >> p;
            temp.push_back(p);
        }
        w_p.push_back(temp);
    }

    vector<double> tab_x;
    vector<double> tab_y;
    int kr = 0;

    for (int i = 0; i < k.size(); i++) {
        kr += k[i];
    }

    for (int i = 0; i < w_w.size(); i++) {
        for (int j = 0; j < k[i]; j++) {
            tab_x.push_back(w_w[i]);
            tab_y.push_back(w_p[i][0]);
        }
    }

    vector<double> pop = tab_y;
    vector<double> wynik;
    int j = 1;

    for (int i = j; i < kr; i++) {
        if (tab_x[i - 1] == tab_x[i]) {
            wynik.push_back(w_p[distance(w_w.begin(), find(w_w.begin(), w_w.end(), tab_x[i]))][j] / silnia(j));
        } else {
            wynik.push_back((pop[i] - pop[i - 1]) / (tab_x[i] - tab_x[i - 1]));
        }
    }

    for (double i : wynik) {
        cout << i << endl;
    }

    return 0;
}
