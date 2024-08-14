#ifndef PROSTOKAT_H
#define PROSTOKAT_H
#include <string>
#include <iostream>

using namespace std;

class Prostokat{
private:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;

    bool czyPoprawny(double bok1, double bok2){
        return bok1 > 0 && bok2 > 0;
    }
    void obliczObwod(){
        obwod = 2 * (bok1 + bok2);
    }
    void obliczPole(){
        pole = bok1 * bok2;
    }
public:
    Prostokat(string n = "?", double a=1, double b=2);
    ~Prostokat();
        const string& jakaNazwa();
        bool czyPoprawny();
        double podajPole();
        double podajObwod();
        bool zmienBoki(double a, double b);
        string doTekstu();
};

#endif // PROSTOKAT_H
