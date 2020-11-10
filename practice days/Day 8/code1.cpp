#include <iostream>
using namespace std;
struct DOC{
    int nameber;
    char text[20];
};

main(){
    DOC strDOC[200];
    int nameberDOC, S;
    cout <<" nameber DOC: ";            cin >> nameberDOC;

    for (int i = 0; i < nameberDOC; i++ ){
        cout << "Nomer document : ";    cin >> strDOC[i].nameber;
        cout << "Text : ";              cin >> strDOC[i].text;
    }
    
    cout << "Qandai nomer : "; cin >> S;

    for (int i = 0; i < nameberDOC; i++ ){
        if (strDOC[i].nameber == S){
            cout << "\n Nomer : " << strDOC[i].nameber;
            cout << "\n Text : " << strDOC[i].text;
        }
    }
return 0;
}