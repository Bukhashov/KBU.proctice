#include <iostream>
#include <math.h>
using namespace std;

class task14{
public:
    int a, b;

    void fanc(){
        cout << "1 number:  " << sqrt(a);
        cout << "\n2 number:  " << sqrt(b);
    }
};

main(){
    task14 task;
    
    cout << "1 number : "; cin >> task.a;
    cout << "2 number : "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}