#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand (time(NULL));

    int n, k = 0;
    cout <<" massiv uzindiga : "; cin >> n;
    int massiv[n][n];

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            massiv[i][j] = rand() % 10 + 20;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j ++){
            cout << massiv[i][j] << " ";
        }
    cout << endl;
    }

    cout << "massiv tort jagindagi sandar : ";
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (i==0 && j==0 || i==n-1 && j==0 || i==0 && j==n-1 || i==n-1 && j==n-1){
                cout << massiv[i][j] << "  ";
                k += massiv[i][j];
            }
        }
    }

    cout << "\nQosindisi : " << k << endl;
return 0;
}