#include <stdio.h>
#include <string>
using namespace std;

main(){
    char text[35];
    puts("Soz engiz: ");
    gets(text);
    int k = 0;
    for(int i = 0; i < sizeof(text); i ++){
        if(text[i] == 'b'){
            k++;
        }
    }
    printf("k : %i", k);

return 0;
}
