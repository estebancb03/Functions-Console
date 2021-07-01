#ifndef FUNCIONBOOLEANA_H
#define FUNCIONBOOLEANA_H
#include <iostream>
#include "Mintermino.h"
#include "Lista.h"
using namespace std;

class FuncionBooleana {
    Lista *listaMinterminos;
    string formulaFuncion;
    bool valorVerdad;
    bool variableA, variableB, variableC;
    public: 
        FuncionBooleana(string ff, bool a, bool b, bool c) {
            formulaFuncion = ff; listaMinterminos = new Lista(); valorVerdad = false;
            variableA = a; variableB = b; variableC = c;  
        };
        ~FuncionBooleana() { delete listaMinterminos; };
        bool getValorVerdad() { return valorVerdad; };
        bool getVariableA() { return variableA; };
        bool getVariableB() { return variableB; };
        bool getVariableC() { return variableC; };
        string getFormula() { return formulaFuncion; };
        Lista *getListaMinterminos() { return listaMinterminos; };
        void setValorVerda(bool v) { valorVerdad = v; };
        void seleccionarMinterminos();
        void evaluar();
};

#endif 