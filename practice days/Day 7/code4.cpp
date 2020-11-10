#include <iostream>
#include <string.h>
using namespace std;

main(){
    int n, k = 0;
    cout << "Studentter sani : "; cin >> n;
    string surname[n];
    
    for (int i = 0; i < n; i++ ){
        cout << i+1 << " sutent : "; cin >> surname[i];
    }
    
    for (int i = 0; i < n; i++ ){
        if (surname[i] == "Petrov"){
            k++;
        }
    }

    cout << "Petron tekti baldar sani : " << k;
return 0;
}