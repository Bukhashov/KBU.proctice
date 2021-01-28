#include <iostream>
#include <string.h>
using namespace std;

main(){
    int n, j= 1;
    cout << "Massiv uzindigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 25 - 18;
        cout <<" | " << A[i];
    }

     for(int i = 0; i < n; i++){
        if (A[i] > 0){
            j *= A[i];   
        }
    }

    cout << "Jauabi : " << j;
    
return 0;
}