#include <iostream>
#include <math.h>
using namespace std;
main(){
  double a, b, c, x, y, d, z, max = 0;
  cout << "a = "; cin >> a;
  cout << "b = "; cin >> b;
  cout << "c = "; cin >> c;
  cout << "x = "; cin >> x;

  if(0 < x < 2){
    y = pow(cos(x),2);
  }
  else{
    y = 1 - sin(pow(x,2));
  }

  if(asin(1 + log(x)) == a){
    x = asin(1 + log(x));
  }

  if(max < a){
    max = a;
  }
  else if(max < b){
    max = b;
  }
  else if(max < c){
    max = c;
  }
  d = max;


  if (x < 0 ){
    if (y < x){
      z = x;
    }else{
      z = y;
    }

  }else if(x >= 0){
    if(y > x){
      z = x;
    }else{
      z = y;
    }
  }

  cout <<"\ny = " << y;
  cout <<"\nd = " << d;
  cout <<"\nz = " << z;

  return 0;
}
