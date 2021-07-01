#ifndef MINTERMINO_H
#define MINTERMINO_H
#include <iostream>
using namespace std;

class Mintermino {
    bool introducidoA, introducidoB, introducidoC;
    bool valorVerdad;
    string formulaMintermino;
    public:
        Mintermino(string fmin, bool a, bool b, bool c) { formulaMintermino = fmin; introducidoA = a; introducidoB = b; introducidoC = c; valorVerdad = true; };
        ~Mintermino();
        void evaluar();
        int longitud();
        void setValorVerdad(bool v) { valorVerdad = v; };
        bool getValorVerdad() { return valorVerdad; };
        string getFormula() { return formulaMintermino; };
};

#endif 

