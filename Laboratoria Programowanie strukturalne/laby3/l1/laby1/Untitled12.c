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
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{      char wybor1;
//    int nr, nr1;
//    float z, x, c, d;
//    printf("a)Predkosc w m/sek i km/godz \n");
//    printf("b) Miara kata w stopniach i radianach\n");
//    printf("wybierz opcje: ");
//    scanf("%c",&wybor1);
//    switch (wybor1)
//    {
//        case 'a':
//
//
//            printf("1. m/sek na km/godz\n");
//            printf("2. km/godz na m/sek\n");
//            printf ("wybierz: ");
//            scanf("%i", &nr);
//            switch (nr)
//            case 1: printf("podaj predkosc w m/s: ");
//            scanf("%f", &x);
//            z=x*(3.6);
//            printf("%f", z);break;
//            case 2: printf("podaj predkosc w km/h: ");
//            scanf("%f", &z);
//            x=z*(10/36);
//            printf("%f", x);break;
//
//
//            case 'b':
//
//            printf("3. stopnie na radiany\n");
//            printf("4. radiany na stopnie\n");
//            printf ("wybierz: ");
//            scanf("%i", &nr);
//            switch (nr1)
//            case 3: printf("podaj ilosc stopni: ");
//            scanf("%f", &d);
//            c=d*(3.14/180);
//            printf("%f", c);break;
//            case 4: printf("podaj ilosc radianow: ");
//            scanf("%f", &c);
//            d=c*(180/3.14);
//            printf("%f", d);break;
//            default: break;
//
//            }
//
//return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//float METRY_NA_KM(float ,float );
//float KM_NA_METRY(float ,float );
//float stopnie_na_radiany(float, float );
//float radiany_na_stopnie(float, float);
//float dzialanie(float, float );
//float delta(float, float);
//int main()
//{float a, b, c, i, delta;
//printf("wybierz wzor: ");
//scanf("%f", &i);
//printf("podaj 2 liczby: ");
//scanf("%f%f", &a, &b);
//if (i==0) {printf("wzor nr 1 = %f\n", dzialanie(a,b));
//}
//if (i==1)	{printf("metry na km = %f\n", METRY_NA_KM(a,b));
//}
//if (i==2)	{printf("KM NA METRY = %f\n", KM_NA_METRY(a,b));
//}
//if (i==3)	{printf("stopnie na radiany = %f\n", stopnie_na_radiany(a,b));
//}
//
//if (i==4)	{printf("radiany na stopnie = %f\n", radiany_na_stopnie(a,b));
//}
//	else 
//	{printf("wzor nie istnieje \n");
//
//	}
//}
//float METRY_NA_KM(float a, float b)
//{	float s;
//	s=a*(3.6);
//	return s;
//}
//float KM_NA_METRY(float a, float b)
//{
//	float n;
//	n= b*(1/3.6);
//	return n;
//}
//float stopnie_na_radiany(float a, float b)
//{
//	float m;
//	m=a*(3.14/180);
//	return m;
//}
//float radiany_na_stopnie(float a, float b)
//{
//	float h;
//	h=b*(180/3.14);
//	return h;
//}
//float delta(float a, float b)
//{
//	float d, c;
//	d=pow(2,b)-4*a*c;
//	return d;
//}
//float dzialanie(float a, float b)
//{
//	float g;
//	float d, c;
//	d=pow(2,b)-4*a*c;
//	
//	g=((-1)*(b)-(d))/(2*a);
//	return g;
//}
//#include <stdio.h>
//#include <stdlib.h>
//float dzialanie(float, float );
//float delta(float, float );
//int main()
//{float a, b, c, i, delta;
//printf("wybierz wzor: ");
//scanf("%f", &i);
//printf("podaj 3 liczby: ");
//scanf("%f%f%f", &a, &b, &c);
//if (i==0) {printf("wzor nr 1 = %f\n", dzialanie(a,b));
//}
//if (i==1) {printf("delta: %f\n");
//}
//}
//float delta(float a, float b)
//{
//	float d, c;
//	d=pow(2,b)-4*a*c;
//	return d;
//}
//float dzialanie(float a, float b)
//{
//	float g;
//	float d, c;
//	d=pow(2,b)-4*a*c;
//	
//	g=((-1)*(b)-(d))/(2*a);
//	return g;
//}





float wynik_cpierw(float ,float );
float wynik_cdrug(float, float);
float w(float, float, float, float);
int main()
{
	float a1x, b1y, a2x, b2y, a1, b2, a2, b1, c1, c2;
	scanf("%f%f%f%f",&a1x, &b1y, &a2x,&b2y);
	printf("c1 = %f\n", wynik_cpierw(a1x,b1y));
	printf("c2 = %f\n", wynik_cdrug(a2x,b2y));
}
float wynik_cpierw(float a1x, float b1y)
{float c1;
	c1=a1x+b1y;
	return c1;
}
float wynik_cdrug(float a2x, float b2y)
{float c2;
c2=a2x+b2y;
return c2;
}
