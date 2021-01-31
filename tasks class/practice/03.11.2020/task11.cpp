#include <iostream>
using namespace std;

class task11{
public:
    int a, b, c;

    void fanc(){
        c = (a+b) / 2;
        cout << " J: " << c;
    }
};

main(){
    task11 task;
    
    cout << "Upper : "; cin >> task.a;
    cout << "Lower : "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}