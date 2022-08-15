#include<iostream>
#include<string>
#include"racional.h"

using namespace std;

int main() {
	int a, b, num1, num2;
	racional R1;

	cout << "Ingrese el primer numero: " << endl;
	cin >> num1;
	R1.setA(num1);
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;
	R1.setB(num2);
	
	a = max(num1, num2);
	b = min(num1, num2);
	
	cout << endl;
	cout << "El Resultado es: " << R1.MCD(a, b);


	return 0;
}