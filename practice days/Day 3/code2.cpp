#include <iostream>
#include <math.h>
using namespace std;

main(){
    int a, n, an, b = 1, b2 =0, c1=0, c2=0;
    int  d1 = 0, d2 = 1;

    cout << "n = "; cin >> n;
    cout << "a = "; cin >> a;

    an = pow(a,n);

    for (int i = 1; i <=n-1; i ++ ){
        b *= a + i;
    }

    for (int i = 0; i <= n; i ++ ){
        c1 += a + i;
        c2 += 1 / c1;
    }
    for (int i = 0; i  < pow (n,2); i++ ){
           if(i%2 == 0){
               d1 += (a - (i*n));
               d2 *= d1;
           }
    }

    cout << "\n --- --- --- ---\n";
    cout <<" a : " << a;
    cout <<" b : "  << b;
    cout <<" c : " << c1;
    cout <<" d : " << d2;
}