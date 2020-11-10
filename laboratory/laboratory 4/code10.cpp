#include <iostream>
using namespace std;
main(){
    int max = 0, n, q, j = 0;
    cout << "San uzindigi "; cin >> n;

    for (int i = 0; i < n; i++ ){
        cout << i+1 << "- san "; cin >> q;
        j += q;
    }
    j /= n;

    cout << "arif : " << j;
return 0;
}