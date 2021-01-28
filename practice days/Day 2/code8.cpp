#include <iostream>
#include <math.h>
using namespace std;
int fank (char  name[10]){
    int a, b, c, d;
    cout << name << " jinagan balldari \n";

    cout << "1 tur : "; cin >>a;
    cout << "2 tur : "; cin >>b;
    cout << "3 tur : "; cin >>c;

    return d = a + b + c;
}

main(){
    char Ivan[]="Ivan",  Pitrov[] = "Pitrov",  Sidorov[] = "Sidorov";
    int Ivan1, Pitrov1, Sidorov1;

    Ivan1 = fank(Ivan);
    Pitrov1 = fank(Pitrov);
    Sidorov1 = fank(Sidorov);

    if (Ivan1 > Pitrov1 && Sidorov1){
        cout << "Ivan jendi " << Ivan1 << " ball men";
    }else if (Pitrov1 > Ivan1 && Sidorov1){
        cout << "Pitrov jendi " << Pitrov1 << " ball men";  
    }else if (Sidorov1 > Ivan1 && Pitrov1){
        cout << "Sidorov jendi "<<Sidorov1 << " ball men";
    }

    return 0;

}