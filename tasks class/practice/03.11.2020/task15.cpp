#include <iostream>
#include <math.h>
using namespace std;

class task15{
public:
    int x, y, c;

    void fanc(){
        c = x / y;
        cout << "J: " << c;
    }
};

main(){
    task15 task;
    int X, Y;
    
    cout << "x: "; cin >> task.x;
    cout << "y: "; cin >> task.y;
    
    task.fanc();
    
return 0;   
}