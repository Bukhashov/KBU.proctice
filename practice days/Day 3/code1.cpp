#include <iostream>
#include <math.h>
using namespace std;

main(){
    int n, a, nNotr = 0, j = 1, Nsin1, Nsin2;
    cout << "\nn : "; cin >> n;

    a = pow(2,n);


    for (int i = 1; i <=n; i ++ ){
        nNotr +=i;

        j *= (1 + 1/pow(i,2));
        Nsin1 += sin (i);
        Nsin2 += 1/Nsin1;   
    }

    cout << "\n ---------------------\n";
    cout << "a : " << a;
    cout << "\nb : " << nNotr;
    cout << "\nc : " << j;
    cout << "\nd : " << Nsin2;

    return 0;
    
}