#include <iostream>
#include <math.h>
using namespace std;

class task17{
public:
    int x, y;

    void fanc(){
        if (x < y){
            cout << "x: " << pow(x,2);
        }else if(x > y){
            cout << "y: " << pow(y,2);
        }else{
            cout << "x == y";
        }
    }
};

main(){
    task17 task;

    cout << "x: "; cin >> task.x;
    cout << "y: "; cin >> task.y;
    
    task.fanc();
    
return 0;   
}