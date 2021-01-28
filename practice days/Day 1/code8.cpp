#include <iostream>
#include <math.h>
using namespace std;
main(){
	double R, R1, R2, R3;
	
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "R3 = "; cin >> R3;
	
	R = 1/(R1 + R2 + R3);
	cout << "juabi : " << R;
	
	return 0;
}
