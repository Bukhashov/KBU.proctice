#include <iostream>
#include <fstream>
using namespace std;
main(){
    int n, k = 0, s = 0, j;
    ifstream file("file.txt");

    while (file >> n){
        if (n > 0){
            k += n;
            s++;
        }
    }
    
    file.close();
    
    j = k / s;
    cout << "J : " << j;
    
    
return 0;
}