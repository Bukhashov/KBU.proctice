#include <iostream>
#include <ctime>
using namespace std;
main(){
    time_t dat = time(0);
    char * data = ctime(&dat);
    cout << "D: " << data;

return 0;    
}