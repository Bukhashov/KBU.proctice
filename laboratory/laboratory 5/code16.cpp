#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, s, s1;
    cout << "Oqushilar sani : "; cin >> n;
    float A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 65 + 35;
        cout << " | " << A[i];
        s1 = A[i];
    }
    s = A[0];
    s1 += s;
    
    cout<< "\nJ : " << s1;
    
return 0;
}