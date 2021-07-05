#include <iostream>
#include "FuncionBooleana.h"
using namespace std;

int main() {
	bool a, b, c;
	string formula = "";
	cout << "f(a,b,c) = "; cin >> formula; cout << endl;
	cout << "Valor A = "; cin >> a;
	cout << "Valor B = "; cin >> b;
	cout << "Valor C = "; cin >> c;	
	cout << endl;
	FuncionBooleana *funcion = new FuncionBooleana(formula, a, b, c);
	funcion -> seleccionarMinterminos();
	funcion -> evaluar();
	cout << "f(a,b,c) = ";
	if(funcion -> getValorVerdad())
		cout << "True";
	else
		cout << "False";
	cout << endl << endl;
	system("Pause");
	return 0;
}