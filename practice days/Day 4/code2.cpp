#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    int n, k = 0;
    cout <<"Jums shilar sani : "; cin >> n;
    int workers[n];

    srand (time(NULL));

    for (int i = 0; i < n; i ++){
        workers[i] = rand() % 67;
    }
    for (int i = 0; i < n; i ++){
        if (workers[i] > 20 && workers[i] < 30 ){
            k ++;
        }
    }
    
    cout << "Firmada " << k <<" jumisshi jastari 20 men 30 araliginda ";

return 0;
}