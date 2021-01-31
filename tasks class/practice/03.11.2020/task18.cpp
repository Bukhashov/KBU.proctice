#include <iostream>
using namespace std;

class task18{
    public:
    int j;

    void fanc(int minutes, int money){
        j = minutes * money;
        cout << "total cost: " << j;
    }
};

main(){
    task18 task;
    int Minutes, Money;
    
    cout << "minutes: "; cin >>  Minutes;
    cout << "money: "; cin >> Money;

    task.fanc(Minutes, Money);

return 0;
}