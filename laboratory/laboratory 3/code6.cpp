#include <iostream>
using namespace std;

main(){
    int data;

    cout << "Data : "; cin >> data;

    if (data == 6){
        cout << "Saturday";
    }else if(data == 7){
        cout << "Sunday";
    }else{
        cout << "Working day";
    }
return 0;
}