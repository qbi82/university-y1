#include <stdio.h>

struct hotel
{char pokoju[3];
float cena;
int status;};

float koszt(int n, int cena, int ile_osob){
int i;
float cena_za_os;
for(i=0;i<n;i++){
cena_za_os=cena/ile_osob;
printf("%f",cena_za_os);}}


int main()
{ int n,i,cena=200;

printf("podaj ilosc pokoi: ");
scanf("%d",&n);
fflush(stdin);
struct hotel wszystkie[n];
for(i=0;i<n;i++){
    printf("podaj ile osob: ");
    gets(wszystkie[i].pokoju);

}
    return 0;
}
