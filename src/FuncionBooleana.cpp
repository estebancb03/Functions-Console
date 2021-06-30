#include <iostream>
#include <string.h>
#include <sstream>
#include "FuncionBooleana.h"
using namespace std;

void FuncionBooleana :: seleccionarMinterminos() {
    string formula;
    stringstream ssFormula(formulaFuncion);
    while(getline(ssFormula, formula, '+')) {
        Mintermino *m = new Mintermino(formula, variableA, variableB, variableC);
        m -> evaluar();
        cout << m ->getValorVerdad();
        listaMinterminos -> agregarMintermino(m);
    }
}