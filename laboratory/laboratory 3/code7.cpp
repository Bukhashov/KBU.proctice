#include <iostream>
using namespace std;

main(){
    int nameber;
    cout << "1 ... 100 :"; cin >> nameber;

    if (nameber%3 == 0 || nameber % 5 == 0){
        cout << nameber << " sani 3ke de 5ke de bolinydi ";
    }else{
        cout << "bolinbydi ";
    }
return 0;
}