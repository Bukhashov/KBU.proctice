#include <iostream>
#include <math.h>
using namespace std;

main(){
    int S, p, a, b, c;
    cout << "a : "; cin >> a;
    cout << "b : "; cin >> b;
    cout << "c : "; cin >> c;

    p = (a + b + c) / 2;
    S = sqrt(p * (p-a) * (p-b) * (p-c));

    cout << "S : " << S;

return 0;
}