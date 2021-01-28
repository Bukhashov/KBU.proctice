#include <iostream>
#include <string.h>
using namespace std;

struct BAZA{
    int nameberSutent;
    string SNF;
    int yearOfBirth;
    string Adres;
};

main(){
    BAZA student[200];
    int n, Inf;
    cout << "Oqushilar sani : "; cin >> n;

    for (int i = 0; i < n; i++ ){
        cout << i+1 << " - Oqushi : \nOqshinin jeke nomeri : "; cin >> student[i].nameberSutent;
        cout << "SNF : "; cin >> student[i].SNF;
        cout << "Tugan jili : "; cin >> student[i].yearOfBirth;
        cout << "Adres : "; cin >> student[i].Adres;
    }

    cout << "Qoushinin nomeri : "; cin >> Inf;

    for (int i = 0; i < n; i++ ){
        if (student[i].nameberSutent == Inf){
            cout << "Oqshinin jeke nomeri : " << student[i].nameberSutent; 
            cout << "Tugan jili : " <<  student[i].yearOfBirth;
            cout << "Adres : " << student[i].Adres;
        }
    }
return 0;
}