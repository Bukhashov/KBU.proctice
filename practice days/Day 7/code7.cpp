#include <iostream>
#include <string.h>
using namespace std;

main(){
    int n, k = 0;
    cout << "Massiv uzindigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 40 + 15;
        cout <<" | " << A[i];
    }

     for(int i = 0; i < n; i++){
        if(A[i]%2 == 0){
            k++ ;
        }
    }

    cout << "\nJauabi : " << k;
    
return 0;
}