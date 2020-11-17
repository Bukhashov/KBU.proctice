#include <iostream>
#include <math.h>
using namespace std;
class triangleClass{
    private:
    int y = 45 , h;
    public:
    int p, S, M;
    
    void triangleFanc(int a, int b, int c){
        h = b * sin(y);
        S = (a * h) / 2;
        p = a + b + c;
        M = 0.5 * sqrt(pow((a*b),2) + pow((2*c),2) - pow(a,2));
        
        cout << "\nS : " << S;
        cout << "\nP : " << p;
        cout << "\nM : " << M;
    }
};

main(){
    triangleClass triangle;
    int A, B, C;
    cout << "The lengths of the sides of a triangle ";
    cout <<"\nA: "; cin >> A;
    cout <<"B: "; cin >> B;
    cout <<"C: "; cin >> C;

    triangle.triangleFanc(A, B, C);

    return 0;

}
