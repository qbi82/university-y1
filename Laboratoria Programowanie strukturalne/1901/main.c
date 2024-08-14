#include <stdio.h>

struct hotel
{char pokoju[2];
float cena;
int status;};




int main()
{ int n;

printf("podaj ilosc pokoi: ");
scanf("%d",&n);
struct hotel pokoje[n];

    printf("podaj ile osob: ");
    scanf("%s",&pokoje.pokoju);

    return 0;
}
