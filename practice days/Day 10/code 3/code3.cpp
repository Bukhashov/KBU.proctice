#include <iostream>
#include <fstream>
using namespace std;

struct Tabil{
  int NameberTabl, Avans;
};

main(){
    int n = 5;
    Tabil nameTabil[200];
    ifstream file("file.txt");

    for (int i = 0; i < n; i++ ){
        file >> nameTabil[i].NameberTabl >> nameTabil[i].Avans;
    }
    
    for (int i = 0; i < n; i++ ){
        if(nameTabil[i].NameberTabl == 999){
            cout << " Tabil nomer\t\tAvans \n----------------------------------------\n";
            cout << "  " << nameTabil[i].NameberTabl << "\t\t\t" << nameTabil[i].Avans;
        }
    }

return 0;
}