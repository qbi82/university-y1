//#include<iostream>
//
//int main()
//{ float T[5],z,k=0,l;
//    int i;
//    int n = 5;
//
//    for(i=0; i<n; i++){
//
//        printf("podaj element tab:");
//        scanf("%f",&T[i]);
//
//if (T[i]<T[n-1]);
//{
//    z+=T[i];
//    k++;
//}}
//
//for (i=0; i<n;i++)
//   {
//    if (T[i]<T[n-1]);
//    printf("%f\t",T[i]);
//    printf("\n");
//}
//l=z/(k);
//printf("srednia liczb: %f",l);
//printf("\n");
//printf("iloczyn liczb 1 i 2: %f",T[0]*T[1]);
//    return 0;
//}




//#include<cmath>
//#include<iostream>
//
//int main()
//{ float T[5],z,T1[5];
//    int i;
//    int x;
//    int n = 5;
//
//    for(i=0; i<n; i++){
//
//        printf("podaj element tab:");
//        scanf("%f",&T[i]);
//    }
//for (i=0; i<n;i++)
//   {
//    if (T[i]<0 )
//
//
// T1[i] = fabs(T[i]);
// else
//    T1[i] = T[i];
//
//
//    printf("%f\t",T1[i]);
//    printf("\n");
//   }
//return 0;
//}



//#include<iostream>
//float Max(int n, float T[])
//{int i;
//float max;
//
//    max=T[0];
//    for (i=0;i<n;i++)
//    {
//        if (T[i]>max)
//        {   max=T[i];
//        }
//    }
//return max;
//}
//
//int main()
//{
//    int i,n=5;
//    float T[5];
//
//        for(i=0; i<n; i++){
//
//            printf("podaj element tab:");
//            scanf("%f",&T[i]);}
//
//printf("%f",Max(n,T));
//return 0;
//}

#include<iostream>
#include <stdio.h>

float WM(int n, float T[])
{int i,l;
float wm;
    n = 5;
    wm= T[n];
    for (i=0;i<n;i++)
    {   if(T[i]>n)
        wm=T[i];
    }
l = sizeof(wm);
return l;
}




float Max(int n, float T[])
{int i;
float max;

    max=T[0];
    for (i=0;i<n;i++)
    {
        if (T[i]>max)
        {   max=T[i];
        }
    }
return max;
}

int main()

{

    int nr;
    int i,n=5;
        float T[5];
    scanf("%d",&nr);
    switch(nr)
    {
        case 1:
            for(i=0; i<n; i++){

            printf("podaj element tab:");
            scanf("%f",&T[i]);}
            printf("maksymalna: %f\n",Max(n,T));


        case 2:
            for(i=0; i<n; i++){

            printf("podaj element tab:");
            scanf("%f",&T[i]);}
    }



printf("liczby w tablicy wieksze od 5: %f",WM(n,T));
return 0;
}


