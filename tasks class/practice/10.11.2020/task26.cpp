#include <iostream>
#include <math.h>
using namespace std;

class task26{
    private:
    float S, pi = 3.14159265359;

    public:
    task26(float r, float h){
        S = 2*pi*r*(h+r);

        output();
    }
    void output(){
        cout << "S = " << S;
    }

};

main(){
    float r, h;
    
    cout << "r: "; cin >> r;
    cout << "h: "; cin >> h;

    task26 task(r, h);

return 0;
}