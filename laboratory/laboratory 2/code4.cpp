#include <iostream>
#include <math.h>
using namespace std;

main(){
    int a, b, c, Au;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    Au = a + b + c;

    cout << "c : " << c;
    cout << "Au : " << Au;

return 0;
}