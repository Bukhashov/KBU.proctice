#include <iostream>
#include <math.h>
using namespace std;

class task27{
    private:
    float V, pi = 3.14159265359;

    public:
    task27(float r, float h){
        V = pi * pow(r,2) * (h/3);

        output();
    }
    void output(){
        cout << "V = " << V;
    }

};

main(){
    float r, h;
    
    cout << "r: "; cin >> r;
    cout << "h: "; cin >> h;

    task27 task(r, h);

return 0;
}