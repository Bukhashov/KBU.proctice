#include <iostream>
using namespace std;
main(){
    int n, j = 0; 
    cout << " n : "; cin >> n;
    
    for (int i = 1; i <= n; i++ ){
        j += i;
    }
    
    cout << "N! : " << j;
return 0;
}