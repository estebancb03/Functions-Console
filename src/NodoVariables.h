#ifndef NODOVARIABLE_H
#define NODOVARIABLE_H
#include <iostream>
using namespace std;

class NodoVariables {
    string variable;
    bool valorVerdad;
    NodoVariables *siguiente;
    public:
        NodoVariables(string v, bool vv) { variable = v; valorVerdad = vv; siguiente = nullptr; };
        ~NodoVariables() { delete siguiente; };
        NodoVariables *getSiguiente() { return siguiente; };
        string getVariable() { return variable; };
        bool getValorVerdad() { return valorVerdad; };
        void setSiguiente(NodoVariables *s) { siguiente = s; };
        void setVariable(string v) { variable = v; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
};

#endif