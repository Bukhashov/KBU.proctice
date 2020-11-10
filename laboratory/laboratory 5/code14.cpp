#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, s = 0, s1 = 0;
    cout << "jil boi algan bagalar sani : "; cin >> n;
    int n1 = n / 2, n2 = n / 2;

    int A[n1], B[n2];

    for (int i = 0; i < n1; i++ ){
        A[i] = rand() % 70 + 35;
        B[i] = rand() % 70 + 30;
    }cout << endl;

    for (int i = 0; i < n1; i++ ){
        s += A[i];
        s1 += B[i];
    }

    s /= n1;
    s1 /= n2;

    if (s > s1){
        cout << "Arti "; 
    }else{
        cout << "Tomendedi ";
    }

return 0;
}

