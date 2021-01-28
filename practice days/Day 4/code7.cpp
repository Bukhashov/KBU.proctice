#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int duken[3][4];

    for (int i = 0; i < 3; i ++ ){
        for(int j = 0; j < 4; j ++){
            cout << i+1 << " shi dukendegi " << j+1 << " zat : ";
            cin >> duken[i][j];
        }
    }

    int max = duken[0][0];
    int maxj;
    for (int i = 0; i < 3; i ++ ){
        for (int j = 0 ; j < 4; j ++){
            if (max < duken[i][j]){
                max = duken[i][j];
                maxj = j;
            }
        }
        cout << i+1 << " shi dukende " << maxj+1 <<" shi zat jaqsi otti, onin bagasi : " << max << endl;
    }
return 0;
}