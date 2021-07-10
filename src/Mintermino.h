#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"
#include <iostream>
using namespace std;

class Mintermino {
    ListaVariables *variables;
    bool introducidoA, introducidoB, introducidoC, introducidoD;
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c, bool d) { variables = new ListaVariables(); formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; introducidoD = d; valorVerdad = false; };
        ~Mintermino() { delete variables; };
        bool evaluar();
        void estandarizar();
        void llenarListaVariables();
        string averiguaFaltantes();
        string getFormula() { return formulaMintermino; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
        bool getValorVeradad() { return valorVerdad; };
};

#endif 

