#include <iostream>
#include <math.h>
using namespace std;

main(){
  double a, S, H, R, r;

  cout << "Ten qabirgali ushburish ";
  cin >> a;

  S = (pow(a,2)*sqrt(3))/4;
  H = pow(pow(a,2)-pow((a/2),2),0.5);
  R = (sqrt(3)/3)*a;
  r = (sqrt(3)/6)*a;
  cout << "audani : " << S;
  cout << "\nBiktigi : " << H;
  cout << "\n Irtay sizilgan shenberdin Radiusi : " << r;
  cout << "\n Ishte sizilgan shenberdin Radiusi : " << R;
  return 0;
}
