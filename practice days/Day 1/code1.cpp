#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

main(){
	int number1, number2, arithmeticMean, geometricMean, number1Arithmetic, number2Arithmetic, number1Geometric, number2Geometric;

	cout << "Enter: Number 1 : ";
	cin >> number1;
	cout << "Enter: Number 2 : ";
	cin >> number2;

	number1Arithmetic = pow(number1,3);
	number2Arithmetic = pow(number2,3);

	number1Geometric = abs(number1);
	number2Geometric = abs(number2);

	arithmeticMean = (number1Arithmetic + number2Arithmetic) / 2;
	geometricMean = pow(sqrt(number1Geometric + number1Geometric),2);


	cout << "Arithmetic mean : " << arithmeticMean;
	cout << "\nGeometric mean : " << geometricMean;

	return 0;
}
