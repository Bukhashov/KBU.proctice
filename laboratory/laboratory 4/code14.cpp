#include <iostream>
using namespace std;
main(){
    int n, j;
    cout << "n : " ; cin >> n;

    for (int i = 0; i < 9; i++ ){
        j = n * i;
        cout << n << "*" << i <<" = " << j << endl;
    }
return 0;
}