#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, w;
    cout << "massiv uzindigi: " ; cin >> n;
    int A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 5 + 7;
        cout << " | " << A[i];
    }cout << endl;

    for (int i = 0; i < n-1; i++ ){
        for (int j = 0; j <n-1;){
            if (A[j] > A[j+1]){
                w = A[j];
                A[j] = A[j+1];
                A[j+1] = w;
            }
        }
    }

    for (int i = 0; i < n; i++ ){
        cout << " | " << A[i];
    }
return 0;
}