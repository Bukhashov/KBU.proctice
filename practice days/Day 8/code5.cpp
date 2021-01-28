#include <iostream>
#include <string.h>
using namespace std;

struct Post{
    string SNF;
    string adres;
    char namePost[10];
};

main(){
    Post NamePost[200];
    int n;
    cout << "Qansha post: "; cin >>n;

    for (int i = 0; i < n; i++ ){
        cout << "SNF : "; cin >>  NamePost[i].SNF;
        cout << "adres : "; cin >> NamePost[i].adres;
        cout << "Name Post : "; cin >> NamePost[i].namePost;
    }

    char PsNamePost[10];
    cout << "Izdep jatqan jazit : " ; cin >> PsNamePost[10];
    for (int i = 0; i < n; i++ ){
        if (NamePost[i].namePost == PsNamePost){
            cout << "SNF : " << NamePost[i].SNF;
            cout << "adres : "<< NamePost[i].adres;
        }
    }
return 0;
}