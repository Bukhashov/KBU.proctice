#include <iostream>
#include <fstream>
using namespace std;
main(){
    int n, id, max = 0, j = 0;
    ifstream file("file.txt");

    while (file >> n){
        j ++;
        if (n > max){
            max = n;
            id = j;
        }
    }
    
    cout << "max :" << max <<  "\nJ: " << j;
    file.close();

return 0;
}