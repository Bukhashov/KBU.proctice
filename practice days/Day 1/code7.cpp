#include <iostream>
#include <math.h>
using namespace std;

main(){
  int a, a4, a16, a256, a1024, aEight, aTen;

  cout << "a = ";
  cin >> a;

  a4 = a*a;
  a16 = a4 * a4;
  aEight = a16 * a16;
  aTen = aEight * a4;

  cout << "a ^ 8 :  " << aEight;
  cout << "\na ^ 10 :  " <<aTen;

  return 0;
}
