#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"
#include "Lista.h"
#include <iostream>
using namespace std;

class Mintermino {
    Lista<string> *variables;
    bool introducidoA, introducidoB, introducidoC, introducidoD;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c, bool d) { variables = new Lista<string>(); formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; introducidoD = d; };
        ~Mintermino() { delete variables; };
        bool evaluar();
        void estandarizar();
        void llenarListaVariables();
        string averiguaFaltantes();
        string getFormula() { return formulaMintermino; };
};

#endif 

