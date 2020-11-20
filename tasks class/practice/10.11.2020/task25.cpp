#include <iostream>
#include <math.h>
using namespace std;

class task25{
    private:
    float L, pi = 3.14159265359;

    public:
    task25(float r, float n){
        L = (2*pi*r*n) / 360;
        
        output();
    }
    void output(){
        cout << "L = " << L;
    }

};

main(){
    float r, n;
    
    cout << "r: "; cin >> r;
    cout << "n: "; cin >> n;

    task25 task(r, n);

return 0;
}