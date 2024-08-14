#include "prostokat.h"

Prostokat::Prostokat(string n, double a, double b){
    poprawny = czyPoprawny(a, b);
    if(poprawny){
        nazwa = n;
        bok1 = a;
        bok2 = b;
        obliczPole();
        obliczObwod();
    } else {
        bok1 = bok2 = pole = obwod = 0;
    }
}

Prostokat::~Prostokat(){
    cout << "Prostokąt o nazwie: " << nazwa << " znika" << endl;
}

const std::string& Prostokat::jakaNazwa(){
    return nazwa;
}
bool Prostokat::czyPoprawny(){
    return poprawny;
}
double Prostokat::podajPole(){
    return pole;
}
double Prostokat::podajObwod(){
    return obwod;
}
bool Prostokat::zmienBoki(double a, double b){
    if(czyPoprawny(a, b)){
        poprawny = true;
       bok1 = a;
       bok2 = b;
       obliczPole();
       obliczObwod();
       return true;
    }
    return false;
}


string Prostokat::doTekstu(){
    string napis = "";
    napis = "Prostokąt o nazwie " + nazwa + + " bok1 = " + to_string(bok1) + ", bok2 =" + to_string(bok2);
    if(poprawny)
        napis += " Obwód: " + to_string(obwod) + ", Pole: " + to_string(pole);
    else
        napis += "! Figura nieprawidłowa.";
   return napis;
}
