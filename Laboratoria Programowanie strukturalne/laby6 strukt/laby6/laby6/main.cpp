//#include <iostream>
//#include <math.h>
//
//
//int main()
//{
//    float a, b, w, y;
//    printf("Podaj a");
//    scanf("%f", &a);
//    printf("podaj b");
//    scanf("%f", &b);
//    printf("podaj krok: ");
//    scanf("%f",&w);
//    if (a<=b && w>0)
//    {
//        do{
//            y=sin(a);
//            printf("x=%.2f\tsin(x)=%f\n",a,y);
//            a+=w;
//        }
//      while (a<=b);
//      {
//          y=sin(a);
//          printf("x=%.2f\tsin(x)=%f\n",a,y);
//          a+=w;
//      }
//
//
//    }
//    else printf("blad danych");
//    return 0;
//    }
//#include <iostream>
//#include <math.h>
//
//
//int main()
//{
//    float a, b, w, y;
//
//    printf("Podaj a: ");
//    scanf("%f", &a);
//    printf("podaj b: ");
//    scanf("%f", &b);
//    printf("podaj krok: ");
//    scanf("%f",&w);
//    if (a<=b && w>0)
//    {   do
//    {
//
//
//        y=a*a+a+1;
//        printf("x=%.2f y=%.2f\n",a,y);
//        a+=w;
//
//    }
//    while (a<=b);
//    }
//        else printf("blad danych");
//    return 0;
//    }
//
//#include <iostream>
//#include <math.h>
//int main()
//    {
//        float p,x,s,y,i; // y ilosc miesiecy
//
//
//    printf("podaj oprocentowanie: ");
//    scanf("%f", &p);
//    s=1 + p/100;
//   printf("Podaj x: ");
//    scanf("%f", &x);
//    i=0;
//    y= 2*x;
//
//
//    if (x<=y && x>0)
//
//    {while (x<=y)
//    { x = x*s;
//        printf("wyplata:%f\n", x);
//        i+=1;
//    printf("liczba odnowien lokaty:%.f\n", i);
//    }}
//    return 0;
//    }
#include <iostream>
int main()
{
    float x,y,sd,su,ild,ilu;
    do
    {scanf("%f",&x);
    if (x>0)
    {
        sd=sd+x;
        ild++;
    }
    if (x<0)
    {
        su=su+x;
    ilu++;
    }}
    while(ild!=ilu);
printf("suma dod:%f\n",sd);
printf("suma uj:%f",su);
    return 0;
}




