#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
using namespace std;

int main()

{
//char T[100],B[100];
//int i,ilosccyfr=0,iloscliczb=0;
//printf("podaj imie: ");
//gets(T);
//printf("podaj nazwisko: ");
//gets(B);
//T[0]=toupper(T[0]);
//B[0]=toupper(B[0]);
//printf("%c",T[0]);
//printf("%c\n",B[0]);
//for(i=0;i<strlen(T);i++){
//    if(isdigit(T[i])){
//        ilosccyfr+=1;}
//        if(isalpha(T[i])){
//            iloscliczb+=1;
//
//        }
//    }
//printf("ilosc cyfr: %d\n",ilosccyfr);
//printf("ilosc liter: %d\n",iloscliczb);
//
//    return 0;
int n;
printf("podaj ilosc wierszy: ");
scanf("%d",&n);
char tablica[n][4];
int i,suma=0;
for(i=0;i<n+1;i++){
    gets(tablica[i]);
}
for(i=0;i<n+1;i++){
    suma+=atoi(tablica[i]);
}
printf("suma: %d",suma);

//char N[4][50],G1[4][50],G2[4][50];
//int k1=0,k2=0,j=0;
//for (j=0;j<4;j++){
//    gets(N[j]);
//    n=strlen(N)
}









}














































//{   char T[4][20];
//    int i;
//    int y[i],s;
//    gets(T[i]);
//    y[i]=atoi(T[i]);
//    s+=y[i];
//    v[0]=toupper(v[0]);
