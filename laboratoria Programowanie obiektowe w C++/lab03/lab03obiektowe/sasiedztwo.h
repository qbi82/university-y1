#ifndef SASIEDZTWO_H
#define SASIEDZTWO_H


class Sasiedztwo
{
private:
    RodzajMieszkanca sasiad [3][3];
    RodzajMieszkanca * elementWewnetrzny(
            Polozenie polozenie);
    static Polozenie losujPolozenie();
public:
    Sasiedztwo(RodzajMieszkanca rodzaj = NIEZNANE);
    void okreslSasiada(Polozenie polozenie,
                      RodzajMieszkanca rodzaj);
    RodzajMieszkancaa ktoJestSasiadem(POlozenie polozenie);
    unsigned short ile(RodzajMieszkaanaca rodzaj) const;
    Polozenie losujSasiada(RodzajMieszkanca rodzaj);
    static void zmienIdeksyWgPolozenia(
            Polozenie polozenie,long & wiersz, long & kolumna);
    static void zmienIdeksyWgPolozenia(
            Polozenie polozenie, unsigned int& wiersz,
            unsigned int & kolumna);
};

#endif // SASIEDZTWO_H
