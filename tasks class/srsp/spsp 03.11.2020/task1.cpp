#include <iostream>
using namespace std;

class intClass
{
public:
    int jPlus, jMax, a, b;
    
    void plus(){
        jPlus = a+b;
    }
    
    void max(){
        if(a > b){
            jMax = a;
        }else if(a < b){
            jMax = b;
        }else{
            jMax = 0;
        }
    }
    
    void Juabbi(){
        cout << "Plus: " << jPlus;
        if(jMax == 0){
            cout << "\nA & B sandari ten ";
        }else{
            cout << "\nMax: "<< jMax;
        }
       
    }

};


main(){
    intClass task1;
    int A, B;
    
    cout << "A : "; cin >> A;
    cout << "B : "; cin >> B;

    task1.a = A;
    task1.b = B;
    task1.plus();
    task1.max();
    task1.Juabbi();

    return 0;
}