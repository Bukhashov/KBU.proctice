#include <iostream>
using namespace std;

main(){
    int A[10];
    int max = A[0];
    for (int i = 0; i < 10; i ++ ){
        cout << i+1 << "- shenberdin radiusi ";
        cin >> A[i];
        
        if(max < A[i]){
            max = i;
        }
    }

    cout << "\n -- -- -- --- \n" <<"max : "<<max;

    return 0;
}