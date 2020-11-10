#include <iostream>
#include <math.h>
using namespace std;
main(){
    int a1, a2, aj1, aj2;
    cout << "1 san : "; cin >> a1;
    cout << "2 san : "; cin >> a2;
    
    for(int i = 0; i <= 10; i++ ){
        aj1 = pow(a1,i);
        aj2 = pow(a2,i);
        cout <<"\n---------------------\n";
        cout << i << "si darigysi ";
        cout << "1 san : " << aj1 << "2 san : " << aj2;
    }
return 0;
}