#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, w = 0;
    cout << "massiv uzindigi: " ; cin >> n;
    int A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 5 + 7;
        cout << " | " << A[i];
    }cout << endl;

    for (int i = 0; i < n; i++ ){
        if (A[i]%5 == 0){
            w += A[i];
        }
        
    }

    cout << "J : " << w;

return 0;
}