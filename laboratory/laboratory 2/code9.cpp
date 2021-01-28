#include <iostream>
#include <math.h>
using namespace std;

int fan(int x, int y){
    int x1;
    return x1 = (x/2) + y;
}

main(){
    int x1, y1, x2, y2, j;
    cout << "x1 & y1 : "; cin >> x1, y1;
    cout << "x2 & y2 : "; cin >> x2, y2;

    j = fan(x1, y1) + fan(x2, y2);

    cout << "j : " << j;

return 0;
}