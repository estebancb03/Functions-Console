#ifndef FUNCIONBOOLEANA_H
#define FUNCIONBOOLEANA_H
#include <iostream>
#include "Mintermino.h"
#include "ListaMinterminos.h"
using namespace std;

class FuncionBooleana {
    ListaMinterminos *listaMinterminos;
    string formulaFuncion;
    bool valorVerdad;
    bool variableA, variableB, variableC, variableD;
    bool valoresVerdadMinterminos[];
    public: 
        FuncionBooleana(string ff, bool a, bool b, bool c, bool d) {
            formulaFuncion = ff; listaMinterminos = new ListaMinterminos(); valorVerdad = false;
            variableA = a; variableB = b; variableC = c, variableD = d;  
        };
        ~FuncionBooleana() { delete listaMinterminos; };
        bool getValorVerdad() { return valorVerdad; };
        string getFormula() { return formulaFuncion; };
        ListaMinterminos *getListaMinterminos() { return listaMinterminos; };
        void setValorVerdad(bool v) { valorVerdad = v; };
        void seleccionarMinterminos();
        void evaluar();
};

#endif 