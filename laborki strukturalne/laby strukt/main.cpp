//int main()
//{
// int a, b;
// float x;
// printf("Program oblicza wartosc wyrazenia: (2a+b)/3");
// printf("\nPodaj liczbe a:");
// scanf("%d", &a);
// printf("Podaj liczbe b:");
// scanf("%d", &b);
// x=(2*a+b)/3.0;         // znak mno¿enia, licznik w nawiasach ()!
// printf("Wynik: %f\n", x);
// return 0;
//}
#include <stdio.h>
int main()
{

int a, b;
float pole;
float obw;
printf("podaj liczbe dlugosc boku a");
scanf("%d", &a);
printf("podaj liczbe dlugosc boku b");
scanf("%d", &b);
pole=a*b;
obw=(2*a)+(2*b);
printf("pole: %f\n", pole);
printf("obw: %f\n", obw);
}
