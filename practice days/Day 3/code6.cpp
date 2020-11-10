#include <iostream>
#include <math.h>
using namespace std;

main(){
    int F = 1, F1 = 0, n;
    cout << "n : "; cin >> n;
    for(int j = 0; j < n; j ++){
        for (int i = 0; i < n; i ++){
            F1 += pow(i,2)+i;
        }
        F *= F1;
    }
    cout << "F : " << F;
   
return 0;
}