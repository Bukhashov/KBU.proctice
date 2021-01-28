#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand (time(NULL));

    int n, k = 0, s, i, j, max = 0, maxi, matr = 0;

    cout <<"Kvadrat matrisanin uzindigi : "; cin >>n;
    int matrisa[n][n], matrisaSize[n];

    for (i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrisa[i][j] = rand()% 50+15-20;
        }
    }
    
    cout << "-----------------------------\n";
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j ++){
            cout << matrisa[i][j] << " ";
        }
    cout << endl;
    }
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            matr += matrisa[i][j];
        }
        if (max < matr){
            max = matr;
            maxi = i;
        }
        matr = 0;
    }

    cout << "-----------------------------\n";
    cout << " max : " << max << endl;
    cout << " max i : " << maxi << endl;
 

return 0;
}