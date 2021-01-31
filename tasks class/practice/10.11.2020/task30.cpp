#include <iostream>
#include <math.h>
using namespace std;

class task27{
    private:
    float W;

    public:
    task27(float m, float v){
        W = pow((m*v),2) / 2;

        output();
    }
    void output(){
        cout << "W: " << W;
    }

};

main(){
    float m, v;
    
    cout << "r: "; cin >> m;
    cout << "h: "; cin >> v;

    task27 task(m, v);

return 0;
}