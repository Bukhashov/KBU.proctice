#include <iostream>
#include <math.h>
using namespace std;

main(){
    int x, y, z, a, b;

    cout << "X: "; cin >> x;
    cout << "Y: "; cin >> y;
    cout << "Z: "; cin >> z;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    int aa = (sqrt(abs(x-1) - pow(sqrt(abs(y)),3))/ 1 + (pow(x,2)/2) + (pow(y,2)/4));
    int ba = x*(atan(z) + exp(x+3));

    int ab = (3 + exp(y-1)) / 1 + pow(x,2) * abs(y - tan(z));
    int bb = (1 + abs(y - x)) + ((pow((y - x),2)) / 2) + (pow(abs(y - x),3) / 3);

    int ac = (1 + y) * (((x + y) / (pow(x,2)+ 4)) / (1 / (pow(x,2) + 4)));
    int bc = (1 + cos(y - 2)) / ((pow(x,4) / 2) + pow(sin(z),2));

    int ad = y + (x / (pow(x,2) + abs(pow(x,2) / y - pow(x,3) / 3)));
    int bd = 1 + pow(tan(x/2),2);
    
    int pi = 3.14;
    int ae = (2 * cos(x - pi - 6)) / 1/2 + pow(sin(y),2);
    int be = 1 + ((pow(z,2)) / (3 + pow(z,2) / 5));
   
    if(a == aa || b == ba){
        cout <<"A) " << a << "\n" << b;
    }else if(a == ab || b == bb){
        cout <<"B) " << a << "\n" << b;
    }else if(a == ac || b == bc){
        cout <<"C) " << a << "\n" << b;
    }else if(a == ad || b == bd){
        cout <<"D) " << a << "\n" << b;
    }else if(a == ae || b = be){
        cout <<"E) " << a << "\n" << b;
    }else{
        cout << " A & B : ten emes ! ";
    }

return 0;
}