#include <iostream>
using namespace std;

main(){
    int nameber, i;

    cout << " bagasi : "; cin >> nameber;

    if(nameber > 500 || nameber <= 999){
        i = nameber / 100;
        i * 3;
        nameber -= i;
        
    }else if(nameber > 1000){
        i = nameber / 100;
        i * 5;
        nameber -= i;
    }
    
    cout << nameber;

return 0;
}