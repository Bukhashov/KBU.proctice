#include <iostream>
#include <math.h>
using namespace std;

main(){
    int A, B, C;

    cout << "1 katet: "; cin >> A;
    cout << "gipatinoza: "; cin >> C;

    B = sqrt(pow(C,2) - pow(A,2));

    int p = A + B + C;
    int S = (A*B) / 2;
    int r = S / p;
    
    cout << "r : " << r;
return 0;
}