#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, j, b = 0;
    cout <<"massiv uzidigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 70 - 18;
        cout <<" | " << A[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++ ){
        if (A[i] < 0){
            j = i;
        }
    }

    for (int i = j+1; i < n; i++ ){
        b += A[i];
    }
    
    cout << " Jauabi : " << b;

return 0;
}