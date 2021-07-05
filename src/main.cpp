#include <iostream>
#include "FuncionBooleana.h"
using namespace std;

int main() {
	bool a, b, c, d;
	string formula = "";
	cout << "f(a,b,c,d) = "; cin >> formula; cout << endl;
	cout << "Valor A = "; cin >> a;
	cout << "Valor B = "; cin >> b;
	cout << "Valor C = "; cin >> c;
	cout << "Valor D = "; cin >> d;	
	cout << endl;
	FuncionBooleana *funcion = new FuncionBooleana(formula, a, b, c, d);
	funcion -> seleccionarMinterminos();
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