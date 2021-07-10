#ifndef MINTERMINO_H
#define MINTERMINO_H
#include <iostream>
#include "ListaVariables.h"
#include "Lista.h"
using namespace std;

class Mintermino {
    Lista<string> *variables = new Lista<string>();
    bool introducidoA, introducidoB, introducidoC, introducidoD;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c, bool d) { formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; introducidoD = d; };
        //~Mintermino() { delete variables; };
        bool evaluar();
        void estandarizar();
        void llenarListaVariables();
        string averiguaFaltantes();
        string getFormula() { return formulaMintermino; };
};

#endif 

