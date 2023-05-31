#include "organizm.h"
#include <iostream>

using namespace std;

Organizm::Organizm(unsigned short dlugoscZycia, unsigned short limitPosilkow, unsigned short kosztPotomka):
    limitPosilkow(limitPosilkow),
    kosztPotomka(kosztPotomka),
    licznikZycia(dlugoscZycia),
    licznikPosilkow(0)
{

}

bool Organizm::posilek(){
    if(glodny()){
        licznikPosilkow++;
        return true;
    }
    return false;
}

void Organizm::krokSymulacji(){
    if(zywy()) licznikZycia--;
}
