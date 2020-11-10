#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct Tabil{
  int NameberTabl, Salary;
  string name, surname, patronymic;
};

main(){
  int n = 5, j;
  Tabil tabilSalary[200];
  ifstream file("fileText.txt");

  for(int i = 0; i < n; i++ ){
    file >> tabilSalary[i].NameberTabl >> tabilSalary[i].surname >> tabilSalary[i].name >> tabilSalary[i].patronymic >> tabilSalary[i].Salary;
  }

  int max = tabilSalary[0].Salary;
  for(int i = 0; i < n; i++ ){
    if (tabilSalary[i].Salary > max){
      max = tabilSalary[i].Salary;
      j = i;
    }
  }
  
  cout << "\n ----------------------------------------\n";
  cout << "Tabil : " << tabilSalary[j].NameberTabl;
  cout << "\nSurname : " << tabilSalary[j].surname;
  cout << "\nName : " << tabilSalary[j].name;
  cout << "\nPatronymic : " << tabilSalary[j].patronymic;
  cout << "\nSalary : " << tabilSalary[j].Salary;

return 0;
}