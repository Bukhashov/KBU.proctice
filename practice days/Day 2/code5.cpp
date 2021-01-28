#include <iostream>
using namespace std;

main(){
    int a, b, c;

    cout <<"a : "; cin >> a;
    cout <<" b : "; cin >> b;
    cout <<" c : "; cin >> c;

    if(a < 0){
        cout << "a 0 den kishi";
    }else if(b < 0){
        cout << "b 0 den kishi";
    }else if (c < 0){
        cout << "c 0 den kishi";
    }else {
        cout << " a b c sandar 0 den ulken";
    }

    return 0;
}