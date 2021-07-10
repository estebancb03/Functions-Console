#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "Lista.h"
#include "Variable.h"
#include <iostream>
using namespace std;

class Mintermino {
    Lista<Variable> *variables;
    bool introducidoA, introducidoB, introducidoC, introducidoD;
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c, bool d) { variables = new Lista<Variable>(); formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; introducidoD = d; valorVerdad = true; };
        ~Mintermino() { delete variables; };
        bool evaluar();
        void estandarizar();
        void llenarListaVariables();
        string averiguaFaltantes();
        string getFormula() { return formulaMintermino; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
        bool getValorVerdad() { return valorVerdad; };
};

#endif 

