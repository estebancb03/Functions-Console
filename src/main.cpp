#include <iostream>
#include "FuncionBooleana.h"
using namespace std;

int main() {
	bool a, b, c;
	string formula = "";
	cout << "f(a,b,c) = "; cin >> formula; cout << endl;
	cout << "Valor A = "; cin >> a; cout << endl;
	cout << "Valor B = "; cin >> b; cout << endl;
	cout << "Valor C = "; cin >> c; cout << endl;	
	FuncionBooleana *funcion = new FuncionBooleana(formula, a, b, c);
	funcion -> seleccionarMinterminos();
	funcion -> getListaMinterminos() -> imprimirLista();
	
	return 0;
}