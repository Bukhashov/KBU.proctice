#include <iostream>
using namespace std;

main(){
    char DM;

    cout << "Sen kimsin Qis nemese Yr bala [D & M]"  ; cin >> DM;

    if (DM == 'D'){
        cout << "Magan qizdar unaidi ";
    }else if (DM == 'M'){
        cout << "Magan uldar unamaidi ";
    }else{
        cout << "Siz D & M engizgin joqsiz";
    }

    return 0;
}