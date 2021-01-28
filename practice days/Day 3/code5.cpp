#include <iostream>
#include <math.h>
using namespace std;

main(){
    int x, x1, n, j = 1;
    cout << "x : " ; cin >> x;

    for (int i = 1; i <= 13; i++ ){
        n += i; 
        if(i%2 == 1){
            x1 = pow(x,i);
            if (n%2 == 0){
                j -= n;
            }else if (n%2 == 1){
                j += n;
            }
        }
    }
    
    cout << " Jauabi : " << j;

return 0;
}