#ifndef VARIABLE_H
#define VARIABLE_H
#include <iostream>
using namespace std;

class Variable {
    string letra;
    bool valorVerdad;
    public:
        Variable(string l, bool vv) { letra = l; valorVerdad = vv; };
        string getLetra() { return letra; };
        bool getValorVerdad() { return valorVerdad; };
        void setLetra(string l) { letra = l; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
        bool evaluar();
};

#endif 