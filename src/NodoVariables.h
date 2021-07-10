#ifndef NODOVARIABLE_H
#define NODOVARIABLE_H
#include <iostream>
#include "Variable.h"
using namespace std;

class NodoVariables {
    Variable *variable;
    NodoVariables *siguiente;
    public:
        NodoVariables(Variable *v) { variable = v; siguiente = nullptr; };
        ~NodoVariables() { delete variable; delete siguiente; };
        NodoVariables *getSiguiente() { return siguiente; };
        Variable *getVariable() { return variable; };
        void setSiguiente(NodoVariables *s) { siguiente = s; };
        void setVariable(Variable *v) { variable = v; };
};

#endif