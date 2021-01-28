#include <iostream>
#include <string.h>
using namespace std;

struct Geometr{
    string SNF;
    int bagaMax;
    int bagaMin;
};

main(){
    Geometr Baga[200];
    int n; 
    cout << "Oushilar sani : "; cin >> n;

    for (int i = 0; i < n; i++ ){
        cout << "SNF : ";  cin >> Baga[i].SNF;
        cout << "9 ay da algan bagalar sani : "; cin >> Baga[i].bagaMax;
        cout << "1 apdana algan bagalari sani : "; cin >> Baga[i].bagaMin;
    }

    int Dig = 20;
    for (int i = 0; i < n; i++ ){
        if(Baga[i].bagaMin >= Dig){
            cout << "\nSNF : " << Baga[i].SNF;
            cout << "\n9 ay da algan bagalar sani : " << Baga[i].bagaMax;
        }
    }

return 0;
}
