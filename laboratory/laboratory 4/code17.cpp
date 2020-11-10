#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
    int n, j, s;
    cout << "Tizin uzindigi : "; cin >> n;
    int A[n];

    for (int i = 0;  i < n; i ++ ){
        A[i] = rand()% 5 + 7;
        cout << " | " << A[i];
    }cout << endl;

    j = A[0];
    s = A[n];
    A[0] = s;
    A[n] = j;

    for (int i = 0;  i < n; i ++ ){
        cout << " | " << A[i];
    }

return 0; 
}