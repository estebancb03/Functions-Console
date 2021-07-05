#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"
#include <iostream>
using namespace std;

class Mintermino {
    ListaVariables *variables;
    bool introducidoA, introducidoB, introducidoC;
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c) { variables = new ListaVariables(); formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; valorVerdad = true; };
        ~Mintermino() { delete variables; };
        void evaluar();
        void estandarizar();
        void llenarListaVariables();
        string averiguaFaltantes();
        void setValorVerdad(bool v) { valorVerdad = v; };
        bool getValorVerdad() { return valorVerdad; };
        string getFormula() { return formulaMintermino; };
};

#endif 

