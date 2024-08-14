#include <iostream>

using namespace std;

int main()
{int i,j,w,k,a,wybor;
printf("ile wierszy: ");
scanf("%d",&w);
printf("ile kolumn: ");
scanf("%d",&k);
float T[w][k],sr,s = 0,flaga=1;
for(i=0;i<w;i++)
for(j=0;j<k;j++)
{
    printf("podaj elem tab: ");
    scanf("%f",&T[i][j]);
}
   printf("tablica\n");
   for(i=0;i<w;i++)
   {
       for(j=0;j<k;j++)
        printf("%.2f\t",T[i][j]);
       printf("\n");
   }
   printf("wybierz program: ");
   scanf("%d",&wybor);
    switch(wybor)
    {case 1:
   printf("ktora kolumna?");
    scanf("%d",&a);
   if (a>=0 && a<k){
   for(i=0;i<w;i++)
   {s=s+T[i][a];
   }sr=s/w;
   printf("%f",sr);
   }
   else{
    printf("brak kolumny");}
    break;
case 2:
    printf("zamiana miejscami liczby z brzegowych wierszy:\n");
    for(i=0;i<w;i++)
        for(j=0;j<k/2;j++)
        if(T[i][j]!=T[i][k-j-1]){
        printf("%.2f\t",T[i][k-j-1]);
        printf("\n");}
    break;
case 3:
    printf("czy znajduje sie 0\n");
for(i=0;i<w;i++){
    for(j=0;j<k;j++){
        if(T[i][j]==0) {
            printf("wystepuje\n");
            flaga=0;
            break;}
         }
    if(flaga=1)
        {printf("nie wystepuje\n");}

} } return 0;
}






//// for
//t[i][j] 1 wiersz 2 kolumna numeracja od 0
//a>=0 and a <= k-1 a to nr kolumny
//for(i=-;i<w;i++)
//    s=s+T[i][a]
//    sr=s/w
//
//
//
//
//for(j=0;j<k/2)
//for(i= ....)
//if(T[i][j]!=T[i][k-j-1])




