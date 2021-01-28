#include <iostream>
#include <math.h>
using namespace std;

main(){
  int x1, y1, x2, y2;

  cout << "X1 and Y1 : "; cin >> x1 >> y1;
  cout << "X2 and Y2 : "; cin >> x2 >> y2;

  if ((x1 + y1) < (x2 + y2)){
    cout << " x1 and y1 jaqin ";
  }else {
    cout << " x2 and y2 jaqin";
  }

  return 0;
}
