#include <iostream>
#include "FuncionBooleana.h"
using namespace std;

int main() {
	bool i[4];
	string formula = "";
	cout << "f(a,b,c,d) = "; cin >> formula; cout << endl;
	cout << "Valor A = "; cin >> i[0];
	cout << "Valor B = "; cin >> i[1];
	cout << "Valor C = "; cin >> i[2];
	cout << "Valor D = "; cin >> i[3];	
	cout << endl;
	FuncionBooleana *funcion = new FuncionBooleana(formula, i);
	funcion -> evaluar();
	cout << "f(a,b,c,d) = ";
	if(funcion -> getValorVerdad())
		cout << "True";
	else
		cout << "False";
	cout << endl << endl;
	system("Pause");
	return 0;
}