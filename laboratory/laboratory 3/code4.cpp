#include <iostream>
using namespace std;

main(){
    int bagasi = 30;
    int kun, minut, i, j, jj;

    cout << "Aptanin qai kuni : "; cin >> kun;
    cout << "Minut : "; cin >> minut;

    if (kun == 6 && kun && 7){
        i = (minut * bagasi) / 100;
        j = i * 20;
        jj = (minut * bagasi) - i;
        cout << "Quni : " << jj; 
    }else{
        i = minut * bagasi;
        cout << "Quni : " << i;
    }
    
return 0;
}