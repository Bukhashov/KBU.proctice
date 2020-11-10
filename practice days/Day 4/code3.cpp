#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    char yn;
    int n, k = 0, s = 0;
    cout << "Konfedter sani : "; cin >> n;
    cout << "Sandardi oziniz engizisizbe [Y | N ]"; cin >> yn;
    int konfed[n];

    if( yn == 'Y'){
        for (int i = 0; i < n; i ++){
            cout <<i + 1 <<" shi konfed bagasi";
            cin >> konfed[i];
        }
    }else if(yn == 'N'){
        for (int i = 0; i < n; i ++){
        konfed[i] = rand() % 750;
        }
    }else{
        cout << "siz [ Y | N ] di engizbediniz ! ";
    }

    for (int i = 0; i < n; i ++){
        if (konfed[i] < 500){
            k++;
            s += konfed[i];
        }
    }
    s /= k;

    cout <<"\n -------------------------------------- \n";
    cout << "500 den komen bagali konfedterdin ortaq bagasi : " << s;

return 0;
}