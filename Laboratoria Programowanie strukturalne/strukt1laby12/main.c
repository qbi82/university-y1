//#include <stdio.h>
//struct samochod
//{char marka[10];
//float l_km;
//};
//int main(int argc, char *argv[])
//{   struct samochod S1, S2;
//   // S1, S2 zmienne strukturalne
//   float D, Z1, Z2;
//   printf(" wpisz dane pierwszego samochodu\n" );
//   printf(" marka: ");
//   gets(S1.marka);
//   //do elementu zmiennej strukturalnej
//   //odwolujemy się poprzez tą zmienna-marka jest częścia S1
//   printf("zuzycie paliwa na 100 km: ");
//   scanf("%f", &S1.l_km);
//   printf(" wpisz dane drugiego samochodu\n" );
//   printf(" marka: ");
//   fflush(stdin);
//     // wpisywanie tekstu po liczbie
//     //trzeba poprzedzic usunieciem znaku ENTER z klawiatury
//     //funkcja fflush usuwa znak z bufora klawiatury
//     gets(S2.marka);
//     printf("zuzycie paliwa na 100 km: ");
//     scanf("%f", &S2.l_km);
//     printf("dlugosc trasy: ");
//     scanf("%f", &D);
//     Z1=S1.l_km*D/100;
//     Z2=S2.l_km*D/100;
//     printf("\nsamochod pierwszy:\n %s zuzyje %.2f l. paliwa\n", S1.marka, Z1);
//     printf("samochod drugi:\n %s zuzyje %.2f l. paliwa\n", S2.marka, Z2);
//     return 0;}


//#include<stdio.h>
//struct HURT
//{
//    char towar[10];
//    float cena;
//    };
//
//int main(int argc, char *argv[])
//{struct HURT t1;
//    float ilosc,wartosc;
//    printf("podaj nazwe towaru\n");
//    gets(t1.towar);
//    printf("cena: \n");
//    scanf("%f",&t1.cena);
//    printf("ilosc towaru: ");
//    scanf("%f",&ilosc);
//wartosc = ilosc*t1.cena;
//    printf("nazwa towaru:\n %s ilosc %.2f po cenie %.2f, o wartosci %.2f",t1.towar,ilosc,t1.cena,wartosc);
//return 0;
//
//}







#include<stdio.h>
struct hurt
{char nazwa[10];
float cena;
float ilosc;
};
int main(int argc, char *argv[]){
int n=3,i,k=0;

struct hurt towary[n];
char towar[10];
float cena_towaru,sr,max=0,suma=0,iloczyn=0;
for(i=0;i<n;i++)
{
    printf("nazwa towaru: ");
    gets(towary[i].nazwa);
    printf("cena towaru: ");
    scanf("%f",&towary[i].cena);
    printf("ilosc towaru: ");
    scanf("%f",&towary[i].ilosc);
    scanf(" ");
    suma+=towary[i].cena*towary[i].ilosc;
    iloczyn=+towary[i].ilosc;
    if (towary[i].cena>=max){
max=towary[i].cena;
}
}   printf("jaki towar: ");
gets(towar);
for(i=0;i<n;i++)
{if(strcmp(towary[i].nazwa,towar)==0)
{k=1;
cena_towaru =towary[i].cena;


printf("c) szukany towar: %s cena: %.2f\n",towar,cena_towaru);}}
sr=suma/iloczyn;
printf("b)srednia wszystkich to: %f\n",sr);
printf("a) najwyzsza cena towaru to: %f\n",max);
return 0;}
