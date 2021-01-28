#include <iostream>
#include <string.h>
using namespace std;

struct Data{
    string data;
    float tempi;
};


main(){
    Data SkData[200];
    int n;
    
    cout << "Tauar sani : "; cin >> n;
    
    for (int i = 0; i < n; i++ ){
        cout << "Data [Jaz] : "; cin >> SkData[i].data;
        cout << "Tempiratura : "; cin >> SkData[i].tempi;
    }

    float Zamer;
    cout << "Tempiratua : "; cin >> Zamer;

    for (int i = 0; i < n; i++ ){
        if(SkData[i].tempi == Zamer){
            cout << "Data :" << SkData[i].data;
            cout << "Tempiratua : " << SkData[i].tempi;
        }
    }

return 0;
}