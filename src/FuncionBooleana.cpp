#include <iostream>
#include <sstream>
#include "FuncionBooleana.h"
using namespace std;

void FuncionBooleana :: seleccionarMinterminos() {
    string formula;
    stringstream ssFormula(formulaFuncion);
    while(getline(ssFormula, formula, '+')) {
        Mintermino *m = new Mintermino(formula, variableA, variableB, variableC, variableD);
        listaMinterminos -> agregarMintermino(m);
        listaMinterminos -> getMinterminoNodo(formula) -> setValorVerdad(m -> evaluar());
        cout << "Evaluacion: " << listaMinterminos -> getMinterminoNodo(formula) -> getValorVerdad() << endl;
    }
}

void FuncionBooleana :: evaluar() {
    int i = 0;
    int longitud = getListaMinterminos() -> longitud();
    bool valoresVerdadMinterminos[longitud];
    llenarValoresVerdadMinterminos(valoresVerdadMinterminos);
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

void FuncionBooleana :: llenarValoresVerdadMinterminos(bool array[]) {
    int i = 0;
    string formula;
    stringstream ssFormula(formulaFuncion);
    while(getline(ssFormula, formula, '+')) {
        array[i] = listaMinterminos -> getMinterminoNodo(formula) -> getValorVerdad();
        i++;
    }
}