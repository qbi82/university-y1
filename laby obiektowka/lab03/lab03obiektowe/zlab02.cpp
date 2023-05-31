#include "zlab02.h"
#include <iostream>
#include <limits>
#include <typeinfo>

using namespace std;

ZLab02::ZLab02()
{

}

void zadanie2_3(){
    int a = -3;
    unsigned int b;
    b=5;

    int int_min = numeric_limits<int>::min ();
    int int_max = numeric_limits<int>::max ();

    int unsigned_int_min = numeric_limits<unsigned int>::min ();
    int unsigned_int_max = numeric_limits< unsigned int>::max ();

    long int_zakres = static_cast<long>(int_max) - static_cast<long>(int_min);
    long unsigned_int_zakres = static_cast<long>(unsigned_int_max)
            - static_cast<long>(unsigned_int_min);

    cout << "Zmienna c1 jest typu "<< typeid (a).name () << " rozmiar: "
         << sizeof(a) << " bajtów" << endl << " Zakres tej zmiennej to: "<< int_min << " -> "
         << int_max << " to oznacza " << int_zakres << " różnych wartości." << endl
         << "Aktualna wartość zmiennej: " << a << endl;

    cout << "Zmienna c2 jest typu "<< typeid (b).name () << " rozmiar: "
         << sizeof(b) << " bajtów" << endl << " Zakres tej zmiennej to: "<< unsigned_int_min << " -> "
         << unsigned_int_max << " to oznacza " << unsigned_int_zakres << " różnych wartości." << endl
         << "Aktualna wartość zmiennej: " << b << endl;
}

void zadanie2_4(){
    int a = 5, b = 3;
    int c = a/b;
    double d = a/b;
    double e = static_cast<double>(a)/static_cast<double>(b);

    cout << "a=" << a << ", b=" << b << endl
         << "a/b = " << c << endl
         << "a/b = " << d << endl
         << "a/b = " << e << endl;
}
