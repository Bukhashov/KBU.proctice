#include <iostream>
#include <math.h>
using namespace std;

main(){
    int m, n;
    cout << "m : "; cin >> m;
    cout << "n : "; cin >> n;

    if (m > n){
        n = m;
    } else if (m = n){
        m = 0;
        n = 0;
    } else {
        m = n;
    }
    cout << " m : " << m;
    cout << " n : " << n;

    return 0;
}