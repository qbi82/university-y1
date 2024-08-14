#include <iostream>

using namespace std;

float firstInstance(int *tabX, int *tabY, int i ){

    return (tabY[ i + 1 ] - tabY[i]) / (tabX[ i + 1 ] - tabX[i]) ;
}

float newton( int *tabX, int *tabY, int k, int i ){
    if(k==0)return 1;
    if(k==1)return firstInstance(tabX,tabY,i);
    return (newton(tabX,tabY, k - 1 , i + 1 ) - newton(tabX,tabY, k - 1 , i)) / (tabX[ i + k ] - tabX[i]) ;
}
int main(){
    double point;
    cout << "Podaj punkt:";
    cin >> point;
    int numberOfNodes;
    cout << "Podaj liczbe wezlow:";
    cin >> numberOfNodes;

    int *tabX = new int[numberOfNodes];
    int *tabY = new int[numberOfNodes];

    for ( int i=0; i<numberOfNodes; i++ ){
        cout << "x[" << i << "]=";
        cin >> tabX[i];
        if ( i > 0 && tabX[i] < tabX[i-1] ){
            while ( tabX[i] < tabX[i-1] ){
                cout << "Podaj inna wartosc wezla [" << i <<"]:";
                cin >> tabX[i];
            }
        }
        cout << "y[" << i << "]=";
        cin >> tabY[i];
        if ( i == 0 && point < tabX[i]
             || i == numberOfNodes-1 && point > tabX[i] ){
            cout << "Punkt poza zakresem!\n";
            return EXIT_FAILURE;
        }
    }
    // int tabX[] = { -4,-2,0,1,3 };
    // int tabY[] = { -1,-7,-21,-1,573 };

    float result = tabY[0];
    int tempV = 0;
    for ( int i=0; i < numberOfNodes; i++ ){
        tempV = 0;
        for ( int j=0; j < i; j++ ){
            if(j == 0) tempV = point - tabX[0];
            else tempV *= point - tabX[j];
        }
        result += tempV*newton(tabX,tabY,i,0);
    }

    cout << "W(" << point << ")=" << result << endl;

    return EXIT_SUCCESS;
}