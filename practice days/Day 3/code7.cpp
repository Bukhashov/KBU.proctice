#include <iostream>
#include <math.h>
using namespace std;

main(){
    int a;
    for (int k = 1; k < 10; k ++){
        k = pow(k,2);
        
        for (int l = 1; l < 15; l ++){
            a =  pow((k - l),2);
        }

        cout << " a : " << a;
    }

    return 0;
}