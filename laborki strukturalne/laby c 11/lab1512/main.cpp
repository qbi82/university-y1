//#include <iostream>
//
//int F1(int k, float T[], float *sr)
//{
//    int i, licz=0;
//    float s=0,ilocz=1;
//    for (i=0; i<k; i++)
//        {
//            if (T[i]> 0)
//            {
//                licz++;
//                s+=T[i];
//    }
//    ilocz=ilocz*T[i];
//    }if (licz != 0)
//    { s=s;
//    *sr=s;
//    printf("iloczyn=%f\n",ilocz) ;
//    return 1;
//    *sr=0;
//return 0;
//}}
//int main()
//{
//int i, n, w;
//printf("ile liczb?");
//scanf("%d", &n);
//float A[n], sred;
//for (i=0; i<n; i++)
//    { printf("podaj liczbe ");
//scanf("%f", &A[i]);
//}
//w = F1(n, A,&sred);
//
// if (w ==1)
//printf("suma dodatnich=%f\n", sred);
//
//else
//    printf("brak liczb dodatnich \n");
//return 0;
//}






#include <stdio.h>
float sumadodatnich(int n , float T[],float *w)
float srednia(int n,float T[],int *ilewiekszych)
void modyf(int n,float T[],int *licznikwystapien)
int main()
{

    int i,n,ile,licznikwystapien;
    printf("podaj ilosc liczb: ");
    scanf("%d",&n);
    while(n<=0){
        printf("podaj dodatnia");
        printf("podaj ilosc liczb: ");
        scanf("%d",&n)
    }
    float T[],suma,iloczyn,sred;
    for(i=0;i<n;i++){
        printf("podaj liczbe");
        scanf("%f",T[i]);
    }
    for(i=0;i<n;i++){
        printf("liczba: %f\n", T[i]);
    }
    suma=sumadodatnich(n,T,&iloczyn);
    printf("suma dodatnich: %f\n",suma);
    printf("iloczyn wszystkich: %f\n",iloczyn);
    sred=srednia(n,T,&ile);
    printf("srednia wszystkich: %f\n",sred);
    printf("ile jest wiekszych od sredniej: %d\n",ile);
    modyf(n,T,&licznikwystapien);
    printf("tab po modyfikacji: \n");
    for(i=0;i<n;i++){
        printf("liczba: %f\n",T[i]);

    }
    printf("licznik wystapien: %d",licznikwystapien);

    }
    float sumadodatnich(int n,float T[],float *w)
    {
        int i;
        float suma=0, a=1;
        for(i=0;i<n;i++){
            if(T[i]>=0){
                suma+=T[i];
            }
            a=a*T[i];
        }
        *w=a;
        return suma;
    }
float srednia(int n, float T[i], float *ilewiekszych){
 int i, licznik = 0;
 float sre=0;
 for (i=0;i<n;i++){
    sre+=T[i];
 }
    sre=sre/n;
    for(i=0;i<n;i++){
        licznik+=1;

    }

*ilewiekszych=licznik;
return sre;
}

void modyf(int n,float T[],int *licznikwystapien){
int i,licznik=0;
for(i=0;i<n;i++){
    if (T[i]<0){
        T[i]=0;
        licznik+=1;
    }
}
*licznikwystapien=licznik;
return licznik;}
