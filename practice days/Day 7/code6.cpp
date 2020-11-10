#include <iostream>
#include <string.h>
using namespace std;

main(){
    int n, j= 0;
    cout << "Massiv uzindigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 40 - 18;
        cout <<" | " << A[i];
    }

     for(int i = 0; i < n; i++){
        j += A[i];
    }

    cout << "\nJauabi : " << j;
    
return 0;
}