#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, j, B = 0;
    cout << "Massiv uzindigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 35 - 18;
        cout <<" | " << A[i];
    }
    for(int i = 0; i < n; i++){
        if (A[i] > 0){
            j = i;
            break;
        }
    }
    for(int i = j; i < n; i++){
        B += A[i];
    }
    cout << "\nJauabi : " << B;
return 0;
}