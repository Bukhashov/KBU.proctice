#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int n, j = 0;
    cout <<"Qansha dital turi bar ? "; cin >> n;
    int dital[n];
    
    for (int i = 0; i < n; i++){
        dital[i] = rand() % 150;
    }
    for (int i = 0; i < n; i++){
        j += dital[i];
    }
    
    cout <<" Detaldar sani : " << j;
return 0;
}