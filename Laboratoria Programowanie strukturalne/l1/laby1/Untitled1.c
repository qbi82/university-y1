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
int main()
{
    float a, b, x1, x2, x3, x4, x5, x6, x7, x8;
    double pow(double podstawa, double potega);
    printf("podaj a \n");
    scanf("%f", &a);
    printf("podaj b \n");
    scanf("%f", &b);
    x1= sqrt(2*(pow (a,2)) + (pow (b,2)));
    printf("%f\n", x1);
    x2=(a*(sin (b))/pow(27, 1./3));
    printf("%f\n", x2);
    x3=sqrt(fabs(a-b)) + pow(a,3);
    printf("%f\n", x3);
    x4=cos(2*b)-sqrt(pow(a,2)) +1;
    printf("%f\n", x4);
    x5=(a+sin(b))/(fabs(pow(a,3))+1);
    printf("%f\n", x5);
    x6=pow((a-b*cos(a)),1./3);
    printf("%f\n", x6);
    x7=a+(sqrt((pow(a,2)+(pow((pow(a,2)-a)/3,2)))));
    printf("%f\n", x7);
    x8=(2./3)*pow((a+b),3)-sqrt(fabs(a))+(10*b);
    printf("%f\n", x8);
    return 0;

}

