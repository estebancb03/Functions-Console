#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "Lista.h"
#include "Variable.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Mintermino {
    Lista<Variable> *variables;
    bool introducidos[4];
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool i[]) { variables = new Lista<Variable>(); formulaMintermino = fmin; memcpy(introducidos,i, 4 * sizeof(int)); valorVerdad = true; };
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

