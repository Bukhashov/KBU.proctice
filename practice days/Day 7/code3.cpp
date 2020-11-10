#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, max =  1;
    cout << "Massiv uzindigi : "; cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = rand() % 35 - 18;
        cout <<" | " << A[i];
    }
    
    for (int i = 0; i <n; i++ ){
        if(A[i] > max){
            max = A[i];
        }
    }
    cout << "\nMax : " << max;

return 0;
}