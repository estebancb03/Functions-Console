#include <iostream>
#include <sstream>
#include "FuncionBooleana.h"
using namespace std;

void FuncionBooleana :: seleccionarMinterminos() {
    int i = 0;
    string formula;
    stringstream ssFormula(formulaFuncion);
    while(getline(ssFormula, formula, '+')) {
        Mintermino *m = new Mintermino(formula, variableA, variableB, variableC, variableD);
        m -> evaluar();
        listaMinterminos -> agregarMintermino(m);
        valoresVerdadMinterminos[i] = listaMinterminos -> getValorVerdad();
        i++;
    }
}

void FuncionBooleana :: evaluar() {
    int i = 0;
    int longitud = getListaMinterminos() -> longitud();
    while(i < longitud) {
        if(valoresVerdadMinterminos[i] == true)
            setValorVerdad(true);
        i++;
    }
    cout << "[";
    for(int i = 0; i < longitud; i++) {
        cout << valoresVerdadMinterminos[i] << ",";
    }
    cout << "]" << endl;
}