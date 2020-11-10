#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int A[10], B[10], S = 0;

    for (int i = 0; i < 10; i++ ){
        A[i] = rand() % 60 + 7;
        B[i] = rand() % 60 + 7;
    }cout << endl;

    for (int i = 0; i < 10; i++ ){
        S += A[i] + B[i];
    }

    cout << "S : " << S;

return 0;
}