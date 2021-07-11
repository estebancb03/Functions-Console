#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "Lista.h"
#include "Variable.h"
#include <iostream>
using namespace std;

class Mintermino {
    Lista<Variable> *variables;
    bool introducidos[4];
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool intro[]) { variables = new Lista<Variable>(); for(int i = 0; i < 4; i++) introducidos[i] = intro[i]; formulaMintermino = fmin; valorVerdad = true; };
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

