#include <iostream>
#include <math.h>
using namespace std;

class task24{
    private:
    float J;

    public:
    task24(float t, float m){
        J = t*m;
        output();
    }
    void output(){
        cout << "Summa = " << J;
    }

};

main(){
    float t, m;
    
    cout << "time: "; cin >> t;
    cout << "money: "; cin >> m;

    task24 task(t, m);

return 0;
}