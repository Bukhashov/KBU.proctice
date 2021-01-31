#include <iostream>
#include <math.h>
using namespace std;

class task23{
public:
    int a, b, j;

    void fanc(){
       j = sqrt(pow(a,2) + pow(b,2));
       cout << "0ge deyin : " << j;
    }
};

main(){
    task23 task;

    cout << "x: "; cin >> task.a;
    cout << "y: "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}