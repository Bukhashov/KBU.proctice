#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, n1, w = 0;
    cout << "Dukender sani :  " ; cin >> n;
    cout << "Hormadagi bagasi :" ; cin >> n1;
    int A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 60 + 7;
        cout <<i+1 << "- Duken : " << A[i] << " Tenge " << endl;
    }cout << endl;
    
    cout << "---------------------------------------\n";

    for (int i = 0; i < n; i++ ){
        if (A[i] > n1){
            cout << i+1 << " Duken " << endl; 
        }
    }

return 0;
}