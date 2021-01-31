#include <iostream>
#include <math.h>
using namespace std;

class task20{
public:
    int a, b, S;

    void fanc(){
       S = a * b;
       cout << "S: " << S;
    }
};

main(){
    task20 task;

    cout << "x: "; cin >> task.a;
    cout << "y: "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}