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
//int main()
//{
//
//int a, b;
//float pole;
//float obw;
//printf("podaj liczbe dlugosc boku a: ");
//scanf("%d", &a);
//printf("podaj liczbe dlugosc boku b: ");
//scanf("%d", &b);
//pole=a*b;
//obw=(2*a)+(2*b);
//printf("pole: %f\n", pole);
//printf("obw: %f\n", obw);
//return 0;
//}


#include <math.h>
//int main()
//{
//   float r, pole, obwod;
//   scanf("%f", &r);
//pole=M_PI*r*r;
//
//obwod=2*M_PI*r;
//printf("pole wynosi = %f\n", pole);
//printf("obw kola wynosi= %f\n", obwod);
//return 0;
//}



//int main()
//{
//    float a, b;
//    double srednia = 0;
//
//    printf("podaj ocene z egz pisemnego: \n");
//    scanf("%f", &a);
//    printf("podaj ocene z egz : \n");
//    scanf("%f", &b);
//srednia= (a+b)/2;
//
//
//printf("srednia wynosi: %.2f\n", srednia);
//
//return 0;
//
//}
//int main()
//{
//    int nr;
//
//    printf("1 -sqrt(2*(pow (a,2)) + (pow (b,2)))\n");
//    printf("2 -(a*(sin (b))/pow(27, 1./3))\n");
//    printf("3 -sqrt(fabs(a-b)) + pow(a,3)\n");
//    printf("4 -cos(2*b)-sqrt(pow(a,2)) +1\n");
//    printf("podaj numer dzialania ktore chcesz wykonac\n");
//    scanf("%d", &nr);
//    float a, b, x1, x2, x3, x4, x5, x6, x7, x8;
//    double pow(double podstawa, double potega);
//    switch (nr)
//    {
//    case 1: printf("podaj a \n");
//    scanf("%f", &a);
//    printf("podaj b \n");
//    scanf("%f", &b);x1= sqrt(2*(pow (a,2)) + (pow (b,2)));
//    printf("%f\n", x1);break;
//    case 2: printf("podaj a \n");
//    scanf("%f", &a);
//    printf("podaj b \n");
//    scanf("%f", &b);x2=(a*(sin (b))/pow(27, 1./3));
//    printf("%f\n", x2);break;
//    case 3: printf("podaj a \n");
//    scanf("%f", &a);
//    printf("podaj b \n");
//    scanf("%f", &b);x3=sqrt(fabs(a-b)) + pow(a,3);
//    printf("%f\n", x3);break;
//    case 4: printf("podaj a \n");
//    scanf("%f", &a);
//    printf("podaj b \n");
//    scanf("%f", &b);x4=cos(2*b)-sqrt(pow(a,2)) +1;
//    printf("%f\n", x4);break;
//
//     default: printf("zle dane\n"); break;
//     }
//
//    return 0;
//
//}
// DRUGIE LABY 3                    //#include <stdio.h>
//#include <stdlib.h>
//int main()
//{      char wybor;
//
//    printf("D -sqrt(2*(pow (a,2)) + (pow (b,2)))\n");
//    printf("E -(a*(sin (b))/pow(27, 1./3))\n");
//    printf("F -sqrt(fabs(a-b)) + pow(a,3)\n");
//    printf("G -cos(2*b)-sqrt(pow(a,2)) +1\n");
//    printf("podaj numer dzialania ktore chcesz wykonac\n");
//
//    float a, b, x1, x2, x3, x4;
//    double pow(double podstawa, double potega);
//
//    printf("podaj a \n");
//    scanf("%f", &a);
//    fflush(stdin);
//    printf("Podaj znak: ");
//    scanf("%c",&wybor);
//    printf("podaj b: ");
//    scanf("%f", &b);
//    switch (wybor)
//    {
//    case 'd': x1= sqrt(2*(pow (a,2)) + (pow (b,2)));
//    printf("%f\n", x1);break;
//    case 'e': x2=(a*(sin (b))/pow(27, 1./3));
//    printf("%f\n", x2);break;
//    case 'f': x3=sqrt(fabs(a-b)) + pow(a,3);
//    printf("%f\n", x3);break;
//    case 'g': x4=cos(2*b)-sqrt(pow(a,2)) +1;
//    printf("%f\n", x4);break;
//
//     default: printf("zly znak\n"); break;
//     }
//
//    return 0;
//
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{      char wybor1;
    int nr, nr1;
    float z, x, c, d;
    printf("a)Predkosc w m/sek i km/godz \n");
    printf("b) Miara kata w stopniach i radianach\n");
    printf("wybierz opcje: ");
    scanf("%c",&wybor1);
    switch (wybor1)
    {
        case 'a':


            printf("1. m/sek na km/godz\n");
            printf("2. km/godz na m/sek\n");
            printf ("wybierz: ");
            scanf("%i", &nr);
            switch (nr)
            case 1: printf("podaj predkosc w m/s: ");
            scanf("%f", &x);
            z=x*(3.6);
            printf("%f", z);break;
            case 2: printf("podaj predkosc w km/h: ");
            scanf("%f", &z);
            x=z*(10/36);
            printf("%f", x);break;


            case 'b':

            printf("3. stopnie na radiany\n");
            printf("4. radiany na stopnie\n");
            printf ("wybierz: ");
            scanf("%i", &nr);
            switch (nr1)
            case 3: printf("podaj ilosc stopni: ");
            scanf("%f", &d);
            c=d*(3.14/180);
            printf("%f", c);break;
            case 4: printf("podaj ilosc radianow: ");
            scanf("%f", &c);
            d=c*(180/3.14);
            printf("%f", d);break;
            default: break;

            }

return 0;
}

