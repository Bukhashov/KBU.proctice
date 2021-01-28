#include <iostream>
#include <math.h>
using namespace std;

main(){
	int x,y, kx, ky;
	
	cout << " x: "; cin >> x;
	cout << " y: "; cin >> y;

	if(x < y){
		x = (x + x)/2;
	}else{
		;
	}

	if(x > y){
		x = x * 2;
	} else{
		y = y * 2;
	}
	
	cout << " x : " << x;
	cout << " y : " << y;

return 0;
}
