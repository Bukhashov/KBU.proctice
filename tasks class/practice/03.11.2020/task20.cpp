#include <iostream>
#include <math.h>
using namespace std;

class task20{
public:
    int a, b, j;

    void fanc(){
       j = pow(a,2) - pow(b,2);
       cout << "J: " << j;
    }
};

main(){
    task20 task;

    cout << "x: "; cin >> task.a;
    cout << "y: "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}