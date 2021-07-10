#ifndef FUNCIONBOOLEANA_H
#define FUNCIONBOOLEANA_H
#include <iostream>
#include "Lista.h"
#include "Mintermino.h"
using namespace std;

class FuncionBooleana {
    Lista<Mintermino> *listaMinterminos;
    string formulaFuncion;
    bool valorVerdad;
    bool variableA, variableB, variableC, variableD;
    public: 
        FuncionBooleana(string ff, bool a, bool b, bool c, bool d) {
            formulaFuncion = ff; listaMinterminos = new Lista<Mintermino>(); valorVerdad = false;
            variableA = a; variableB = b; variableC = c, variableD = d;  
        };
        ~FuncionBooleana() { delete listaMinterminos; };
        bool getValorVerdad() { return valorVerdad; };
        string getFormula() { return formulaFuncion; };
        Lista<Mintermino> *getListaMinterminos() { return listaMinterminos; };
        void setValorVerdad(bool v) { valorVerdad = v; };
        void seleccionarMinterminos();
        void evaluar();
        void llenarValoresVerdadMinterminos(bool array[]);
};

#endif 