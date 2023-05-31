struct samochod
{char marka[10];
float l_km;
};
int main(int argc, char *argv[])
{   struct samochod S1, S2;
   // S1, S2 zmienne strukturalne
   float D, Z1, Z2;
   printf(" wpisz dane pierwszego samochodu\n" );
   printf(" marka: ");
   gets(S1.marka);
   //do elementu zmiennej strukturalnej
   //odwolujemy się poprzez tą zmienna-marka jest częścia S1
   printf("zuzycie paliwa na 100 km: ");
   scanf("%f", &S1.l_km);
   printf(" wpisz dane drugiego samochodu\n" );
   printf(" marka: ");
   fflush(stdin);
     // wpisywanie tekstu po liczbie
     //trzeba poprzedzic usunieciem znaku ENTER z klawiatury
     //funkcja fflush usuwa znak z bufora klawiatury
     gets(S2.marka);
     printf("zuzycie paliwa na 100 km: ");
     scanf("%f", &S2.l_km);
     printf("dlugosc trasy: ");
     scanf("%f", &D);
     Z1=S1.l_km*D/100;
     Z2=S2.l_km*D/100;
     printf("\nsamochod pierwszy:\n %s zuzyje %.2f l. paliwa\n", S1.marka, Z1);
     printf("samochod drugi:\n %s zuzyje %.2f l. paliwa\n", S2.marka, Z2);
     return 0;}
