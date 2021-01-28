#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct zarpl{
  int NameberTabl, Salary;
  string name, surname, patronymic;
};

main(){
    int n = 5;
    zarpl zarplSalary[200];
    ifstream file("taxt.txt");

    for(int i = 0; i < n; i++ ){
        file >> zarplSalary[i].NameberTabl >> zarplSalary[i].surname >> zarplSalary[i].name >> zarplSalary[i].patronymic >> zarplSalary[i].Salary;
    }

    for(int i = 0; i < n; i++ ){
        if(zarplSalary[i].NameberTabl == 999 && zarplSalary[i].Salary > 45000){
            cout << "Tabil : " << zarplSalary[i].NameberTabl;
            cout << "\nSurname : " << zarplSalary[i].surname;
            cout << "\nName : " << zarplSalary[i].name;
            cout << "\nPatronymic : " << zarplSalary[i].patronymic;
            cout << "\nSalary : " << zarplSalary[i].Salary;
            cout << "\n ----------------------------------------\n";
        }
    }
    
    file.close();
return 0;
}