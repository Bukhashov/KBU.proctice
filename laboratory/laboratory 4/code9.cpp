#include <iostream>
using namespace std;
main(){
    int max = 0;
    int n, q;
    cout << "San uzindigi "; cin >> n;

    for (int i = 0; i < n; i++ ){
        cout << i+1 << "- san "; cin >> q;
        if (q > max){
            max = q;
        }
    }
    cout << "max :" << max;
return 0;
}