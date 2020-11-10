#include <iostream>
#include <math.h>
using namespace std;

main(){
    float x, y;
    cout << "X: "; cin >> x;
    cout << "Y: "; cin >> y;

    float j; 
    
    j = (abs(x) + abs(y)) / (1 + (x * y));

    cout << "J : " << j;

return 0;
}