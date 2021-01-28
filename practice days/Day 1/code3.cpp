#include <iostream>
#include <math.h>
using namespace std;

main(){
  int a, V, S;

  cout << "Kub Qabirgasin uzindizi : ";
  cin >> a;

  V = pow(a,3);
  S = 6 * pow(a,2);

  cout << "Betinin audani : " <<S;
  cout << "Kolemi : " <<V;

  return 0;
}
