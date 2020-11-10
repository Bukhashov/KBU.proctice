#include <iostream>
#include <string.h>
using namespace std;

struct NameberPhone{
    char surname[15];
    char name[15];
    int nameberPhone;
    string Hobbi;
};


main(){
    NameberPhone Contacts[200];
    int n;
    cout << "Dostar sani : "; cin >> n;

    for (int i = 0; i < n; i++){
        cout << i+1 << " Frand \nSurname: "; cin >> Contacts[i].surname;
        cout << "Name : "; cin >> Contacts[i].name;
        cout << "Nameber Phone +77"; cin >> Contacts[i].nameberPhone;
        cout << "Hobbi : "; cin >> Contacts[i].Hobbi;
    }
    
    string ContactsHobbi = "Game Computor";
    for (int i = 0; i < n; i++ ){
        if(Contacts[i].Hobbi  == ContactsHobbi){
            cout <<"\nSurname: " << Contacts[i].surname;
            cout << "\nName : " << Contacts[i].name;
            cout << "\nNameber Phone +77" << Contacts[i].nameberPhone;
            cout << "\nHobbi : " << Contacts[i].Hobbi;
        }
    }
return 0;
}