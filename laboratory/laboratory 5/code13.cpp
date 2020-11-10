#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int n, s = 0;
    cout << "jil boi algan bagalar sani : "; cin >> n;
    int A[n];

    for (int i = 0; i < n; i++ ){
        A[i] = rand() % 70 + 35;
    }cout << endl;

    for (int i = 0; i < n; i++ ){
        s += A[i];
    }
    s /= n;

    cout << "Jildiq bagasi : " << s;

return 0;
}