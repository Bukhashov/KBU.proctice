#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, s = 0;
    cout << "massivte kezdesetin san :" ; cin >> n;
    int A[10];

    for (int i = 0; i < 10; i++ ){
        A[i] = rand() % 5 + 7;
        cout << " | " << A[i];
    }cout << endl;

    for (int i = 0; i < 10; i++ ){
        if(A[i] == n){
            s++;
        }
    }
    cout << "J : " << s;

return 0;
}