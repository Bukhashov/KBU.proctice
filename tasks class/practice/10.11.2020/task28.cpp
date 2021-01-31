#include <iostream>
#include <math.h>
using namespace std;

class task24{
    private:
    float P;

    public:
    task24(float R, float V){
        P = pow(V,2) / R;

        output();
    }
    void output(){
        cout << "P:  " << P;
    }

};

main(){
    float R, V;
    
    cout << "R: "; cin >> R;
    cout << "V: "; cin >> V;

    task24 task(R, V);

return 0;
}