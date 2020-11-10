#include <iostream>
#include <math.h>
using namespace std;

main(){
  double a, b, S;

  cout << " a = "; cin >> a;
  cout << " b = "; cin >> b;

  S = (1/2) * (a * b) * sin(a);

  cout << "s = " << S;

  return 0;
}
