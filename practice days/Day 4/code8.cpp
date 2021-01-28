#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

main(){
    int n;
    cout << "massiv uzindigi : "; cin >> n;
    int A[n][n];

    for (int i = 0; i < n; i ++ ){
        for (int j = 0; j < n; j++ ){
            A[i][j] = rand()% 10 + 20;
        }   
    }

    for (int i = 0; i < n; i ++ ){
        for (int j = 0; j < n; j++ ){
            cout << setw(3) << A[i][j];
        }   
        cout << endl;
    }

    for (int i = 0; i < n; i ++ ){
        for (int j = 0; j < n; j++ ){
            if (i == j){
                A[i][j] = 0;
            }else if (i < j){
                A[i][j] = 1;
            }else if (i > j){
                A[i][j] = 2;
            }
        }   
    }
    cout << "\n ----------------------------------\n";
    for (int i = 0; i < n; i ++ ){
        for (int j = 0; j < n; j++ ){
            cout << setw(3) << A[i][j];
        } 
        cout << endl;
    }
return 0;
}