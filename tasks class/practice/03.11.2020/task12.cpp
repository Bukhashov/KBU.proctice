#include <iostream>
#include <math.h>
using namespace std;

class task12{
public:
    int a, b, c;

    void fanc(){
        c = a / b;
        cout << "c: " << c;
    }
};

main(){
    task12 task;

    cout << "a: "; cin >> task.a;
    cout << "b: "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}