#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, s = 0, s1 = 0;
    cout << "Oqushilar sani : "; cin >> n;
    float A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 65 + 35;
        cout << " | " << A[i];
    }

    for (int i = 0; i < n; i++ ){
        if(A[i] >= 90){
            s++;
        }
    }
    n = 100 / n ;
    s *= n;

    cout<< "\nJ : " << s;

return 0;
}

