#include <stdio.h>
#include <string.h>
using namespace std;

main(){
    char X[15];
    char Y[15];
    int j = 0;
    
    puts("X: "); gets(X);
    puts("Y: "); gets(Y);

    for (int i = 0; i < 15; i++ ){
        if (X[i] == Y[i] && i == j){
            j ++ ;
        }
    }

    printf("J %i", j);

return 0;
}