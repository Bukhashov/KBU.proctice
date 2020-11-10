#include <iostream>
#include <math.h>
using namespace std;

main(){
    int V, r, pi = 3.14, h;

    cout << "r : "; cin >> r;
    cout << "h : "; cin >> h;

    V = pi * pow(r,2) * h;

    cout << "V: " << V;
return 0;
}