#include <iostream>
#include <math.h>
using namespace std;

main(){
    int A, B, a, S;
    cout << "A: "; cin >> A;
    cout << "B: "; cin >> B;
    cout << "a: "; cin >> a;

    S = A * B * sin(a);

    cout << "S: " << S;
return 0;
}