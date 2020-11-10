#include <iostream>
using namespace std;

main(){
    int N, M;
    cout << "1 : "; cin >> N;
    cout << "2 : "; cin >> M;

    if(N > M){
        cout << "1 san ulken ";
    }else if (N == M){
        cout << " 1 = 2 ";
    }else{
        cout << "2 san ulken";
    }
return 0;
}