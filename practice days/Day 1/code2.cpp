#include <iostream>
#include <math.h>
using namespace std;

main(){
  int x1, y1, x2, y2, DistancePow, Distance;

  cout << "X1 = "; cin >> x1;
  cout << "Y1 = "; cin >> y1;
  cout << "X2 = "; cin >> x2;
  cout << "Y2 = "; cin >> y2;

  DistancePow = pow((x2 - x1),2) + pow((y2 - y1),2);
  Distance = sqrt(DistancePow);

  cout << "Distance : " << Distance;

  return 0;
}
