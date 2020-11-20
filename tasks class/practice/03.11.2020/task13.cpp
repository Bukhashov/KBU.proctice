#include <iostream>
using namespace std;

class task13{
public:
    int a, b;

    void fanc(){
        a /= 2;
        b /= 2;
        cout << "1 number:  " << a;
        cout << "\n2 number:  " << b;
    }
};

main(){
    task13 task;
    int A, B;
    
    cout << "1 number : "; cin >> task.a;
    cout << "2 number : "; cin >> task.b;
    
    task.fanc();
    
return 0;   
}