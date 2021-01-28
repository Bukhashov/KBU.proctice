#include <iostream>
using namespace std;

main(){
    int A[5], max, min, i1, j1;
    for (int i = 0; i < 5; i ++ ){
        cout << i+1 <<" oqushinin boi : "; cin >> A[i];
    }
    max = min = A[0];
    for (int i = 0; i < 5; i++ ){
        if (A[i] > max){
            max = A[i];
            i1 = i;
        }
        if(A[i] < min){
            min = A[i];
            j1 = 1;
        }
    }
    cout << "Boyi uzin oqushi : " << i1 << "\tBoyi uzindigi : "<< max;
    cout << "\nBoyi kishkentay : " << j1 << "\tBoyi uzindigi : "<< min;
return 0;
}