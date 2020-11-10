#include <iostream>
#include <math.h>
using namespace std;

main(){
    int a, b, c, d, j, i, f;
    cout << "a : "; cin >> a;
    cout << "b : "; cin >> b;
    cout << "c : "; cin >> c;
    cout << "d : "; cin >> d;

    j = a + b + c + d;
    i = a - b - c - d;
    f = a * b * c * d;

    cout << "+ : " << j;
    cout << "- : " << i;
    cout << "* : " << f;

return 0;
}