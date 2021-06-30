#include <iostream>
#include <string.h>
#include <sstream>
#include "FuncionBooleana.h"
using namespace std;

void FuncionBooleana :: seleccionarMinterminos() {
    string formula;
    stringstream ssFormula(formula);
    while(getline(ssFormula, formula, '+')) {
        Mintermino *m = new Mintermino(formula, variableA, variableB, variableC);
        m -> evaluar();
        listaMinterminos -> agregarMintermino(m);
    }
}