#include <iostream>
#include <math.h>
using namespace std;

main(){
  int a = 0, b, c, d;
  double x1, x2;

  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;

  d = (b * b) - 4 * a * c;
  if ( d > 0){
    x1 = (b + sqrt(d)) / (2 * a);
    x2 = (b - sqrt(d)) / (2 * a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }
  else if(d == 0){
    x1 = (-b)/(2 * a);
    cout << "X1 = " << x1 << endl;
  }
  else{
    cout << "seshimi jok ! " << endl;
  }
  return 0;
}
