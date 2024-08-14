#include <stdio.h>

struct hotel
{char pokoju[3];
float cena;
float ilosc;
int status;};

float koszt(int n, int cena, int ile_osob){
int i;
float cena_za_os;
for(i=0;i<n;i++){
cena_za_os=cena/ile_osob;
printf("%f",cena_za_os);}}

void wysw(float a){
printf("ilosc osob: %d",a);
}
int kwota(float c,int n){
printf("kwota na osobe: %d\n",c/n);}



int main()
{ int n,i;

printf("podaj ilosc pokoi: \n");
scanf("%d",&n);

struct hotel wszystkie[n];
for(i=0;i<n;i++){
    printf("podaj ile osob: \n");
    scanf("%f",&wszystkie[i].ilosc);
    fflush(stdin);
    printf("podaj cene za pokoj: \n");
    scanf("%f",&wszystkie[i].cena);
    printf("podaj status pokoju: ");
    scanf("%d",&wszystkie[i].status);
}
for (i=0;i<n;i++){
kwota(wszystkie[i].cena,wszystkie[i].ilosc);}
wysw(wszystkie[i].ilosc);

    return 0;
}
